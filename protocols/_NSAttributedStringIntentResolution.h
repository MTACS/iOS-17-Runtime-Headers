
@protocol _NSAttributedStringIntentResolution <NSObject>

@required

+ (NSAttributedString *)attributedStringByResolvingString:(NSAttributedString *)arg1;
+ (NSDictionary *)attributesByResolvingIntentsInAttributes:(NSDictionary *)arg1;
+ (void)resolveAttributedString:(NSMutableAttributedString *)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

@end
