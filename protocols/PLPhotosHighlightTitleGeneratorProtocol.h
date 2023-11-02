
@protocol PLPhotosHighlightTitleGeneratorProtocol <NSObject>

@required

+ (NSString *)titleForHighlight:(id <PLPhotosHighlightData>)arg1 filter:(unsigned short)arg2 dateRangeTitleGenerator:(PLDateRangeTitleGenerator *)arg3 options:(unsigned long long)arg4;

@end
