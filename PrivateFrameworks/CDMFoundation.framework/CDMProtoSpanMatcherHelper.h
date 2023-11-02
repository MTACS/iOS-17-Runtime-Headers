
@interface CDMProtoSpanMatcherHelper : NSObject

+ (id /* block */)ascendingStartIndexComparator;
+ (id)buildMatchingSpanProtoWithLabel:(id)arg1 inputStringForDebug:(id)arg2 startTokenIndex:(unsigned int)arg3 endTokenIndex:(unsigned int)arg4 spanMatcherName:(int)arg5;
+ (id)buildMatchingSpanProtoWithLabel:(id)arg1 inputStringForDebug:(id)arg2 startTokenIndex:(unsigned int)arg3 endTokenIndex:(unsigned int)arg4 startCharIndex:(unsigned int)arg5 endCharIndex:(unsigned int)arg6 spanMatcherName:(int)arg7;
+ (id)buildUsoEntitySpan:(id)arg1 semantic:(id)arg2 nodeIndex:(int)arg3 startIndex:(unsigned int)arg4 endIndex:(unsigned int)arg5 tokenCount:(unsigned int)arg6;
+ (id)buildUsoIdentifier:(id)arg1 semantic:(id)arg2 nodeIndex:(int)arg3;
+ (id)buildUtteranceAlignments:(unsigned int)arg1 endCharIndex:(unsigned int)arg2 nodeIndex:(int)arg3;
+ (id /* block */)descendingLengthComparator;
+ (void)enumerateTokenChain:(id)arg1 useNormalizedValues:(bool)arg2 withCallback:(id /* block */)arg3;
+ (bool)isTrailingSpanAdjacent:(id)arg1 secondSpan:(id)arg2 tokenChain:(id)arg3;
+ (id /* block */)voiceCommandSpanComparator;

@end
