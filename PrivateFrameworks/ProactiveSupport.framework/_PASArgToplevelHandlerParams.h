
@interface _PASArgToplevelHandlerParams : NSObject {
    NSDictionary * _options;
    _PASArgParser * _parser;
    NSArray * _positionalArguments;
}

@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) _PASArgParser *parser;
@property (nonatomic, readonly) NSArray *positionalArguments;

- (void).cxx_destruct;
- (id)initWithParser:(id)arg1 options:(id)arg2 positionalArguments:(id)arg3;
- (id)options;
- (id)parser;
- (id)positionalArguments;

@end
