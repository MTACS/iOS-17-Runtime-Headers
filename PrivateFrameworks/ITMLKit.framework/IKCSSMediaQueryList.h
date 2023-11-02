
@interface IKCSSMediaQueryList : NSObject

- (unsigned long long)count;
- (bool)evaluate;
- (id)expressionAsString;
- (id)subQueryAtIndex:(unsigned long long)arg1;

@end
