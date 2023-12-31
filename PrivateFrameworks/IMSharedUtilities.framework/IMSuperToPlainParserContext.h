
@interface IMSuperToPlainParserContext : IMFromSuperParserContext {
    bool  _extractLinks;
    NSMutableString * _mutablePlainString;
}

@property (nonatomic, readonly) NSMutableString *mutablePlainString;
@property (nonatomic, readonly) NSString *plainString;

- (void)dealloc;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithAttributedString:(id)arg1 extractLinks:(bool)arg2;
- (id)mutablePlainString;
- (id)name;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 characters:(id)arg4;
- (id)plainString;
- (id)resultsForLogging;

@end
