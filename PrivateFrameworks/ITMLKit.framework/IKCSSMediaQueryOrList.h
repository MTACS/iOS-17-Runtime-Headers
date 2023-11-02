
@interface IKCSSMediaQueryOrList : IKCSSMediaQueryList {
    IKMutableArray * _queryList;
}

- (void).cxx_destruct;
- (void)addSubQueryList:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (bool)evaluate;
- (id)expressionAsString;
- (id)init;
- (id)subQueryAtIndex:(unsigned long long)arg1;
- (id)subQueryList;

@end
