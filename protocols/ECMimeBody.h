
@protocol ECMimeBody <NSObject>

@required

- (NSString *)mimeSubtype;
- (NSString *)mimeType;
- (unsigned long long)totalTextSize;

@end
