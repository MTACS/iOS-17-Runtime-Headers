
@interface WFPostprocessor : NSObject

+ (id)adultWebSiteTagging:(id)arg1;
+ (id)lightweightStripHTMLTags:(id)arg1;
+ (id)lightweightStripHTMLTagsForLine:(id)arg1;
+ (id)normalizeStrippedHTML:(id)arg1;
+ (id)postprocessPlainTextWebPage:(id)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfFirstHTMLTag:(id)arg1 searchRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
