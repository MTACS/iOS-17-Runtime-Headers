
@protocol _LTDisambiguableResultDelegate <NSObject>

@optional

- (void)disambiguableResult:(_LTDisambiguableResult *)arg1 didChangeResultForSentence:(_LTDisambiguableSentence *)arg2 withSelection:(_LTDisambiguationUserSelection *)arg3;
- (NSSet *)excludedTypesForResult:(_LTDisambiguableResult *)arg1;

@end
