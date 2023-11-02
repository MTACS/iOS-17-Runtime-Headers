
@interface SymbolValidator : YQLRequest {
    id  _delegate;
    NSArray * _symbols;
}

@property (nonatomic) id delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)didParseData;
- (void)failWithError:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)parseData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)validateSymbol:(id)arg1 withMaxResults:(int)arg2;

@end
