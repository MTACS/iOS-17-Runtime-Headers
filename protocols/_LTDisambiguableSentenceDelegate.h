
@protocol _LTDisambiguableSentenceDelegate <NSObject>

@optional

- (void)disambiguableSentence:(_LTDisambiguableSentence *)arg1 didSelectNode:(_LTDisambiguationNode *)arg2 atIndex:(unsigned long long)arg3 withSelection:(_LTDisambiguationUserSelection *)arg4;
- (NSSet *)excludedTypesForDisambiguableSentence:(_LTDisambiguableSentence *)arg1;

@end
