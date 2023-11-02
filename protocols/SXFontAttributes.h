
@protocol SXFontAttributes <NSObject, NSCopying>

@required

- (NSString *)familyName;
- (NSNumber *)grade;
- (long long)style;
- (long long)weight;
- (long long)width;

@end
