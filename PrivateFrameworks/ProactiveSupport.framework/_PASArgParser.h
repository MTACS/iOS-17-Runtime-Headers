
@interface _PASArgParser : NSObject {
    id /* block */  _handler;
    NSMutableArray * _registeredOptions;
    NSMutableArray * _registeredSubcommands;
    NSMutableSet * _requiredOptions;
}

@property (nonatomic, readonly) id /* block */ handler;
@property (nonatomic, readonly) NSMutableArray *registeredOptions;
@property (nonatomic, readonly) NSMutableArray *registeredSubcommands;
@property (nonatomic, retain) NSMutableSet *requiredOptions;

+ (id)boolValueForArgument:(id)arg1 error:(id*)arg2;
+ (id)enumValueForArgument:(id)arg1 withMapping:(id)arg2 error:(id*)arg3;
+ (id)numberValueForArgument:(id)arg1 error:(id*)arg2;
+ (id)parserWithHandler:(id /* block */)arg1;
+ (id)simpleParserWithHelpGenerator:(id /* block */)arg1 version:(id)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)_argumentParseTemplate:(id)arg1 longArgs:(struct option {}**)arg2;
- (id)description;
- (id /* block */)handler;
- (id)initWithHandler:(id /* block */)arg1;
- (int)invokeHandlerWithArguments:(const char **)arg1 count:(int)arg2 parseErrorCode:(int)arg3 error:(id*)arg4;
- (id)naiveUsageHelpWithPositionalArgString:(id)arg1;
- (id)optionLongHelp;
- (id)optionShortHelp;
- (void)registerOption:(id)arg1;
- (void)registerSubcommand:(id)arg1;
- (id)registeredOptions;
- (id)registeredSubcommands;
- (id)requiredOptions;
- (void)setRequiredOptions:(id)arg1;
- (id)subcommandLongHelp;

@end
