
@interface _PASArgSubcommandHandlerParams : NSObject {
    NSDictionary * _options;
    NSArray * _positionalArguments;
    _PASArgSubcommand * _subcommand;
}

@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) NSArray *positionalArguments;
@property (nonatomic, readonly) _PASArgSubcommand *subcommand;

- (void).cxx_destruct;
- (id)initWithSubcommand:(id)arg1 options:(id)arg2 positionalArguments:(id)arg3;
- (id)options;
- (id)positionalArguments;
- (id)subcommand;

@end
