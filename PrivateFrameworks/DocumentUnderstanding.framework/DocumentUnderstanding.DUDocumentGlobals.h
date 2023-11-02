
@interface DocumentUnderstanding.DUDocumentGlobals : NSObject

+ (long long)defaultMaxLength;
+ (long long)htmlStringMaxLength;
+ (long long)noMaxLength;
+ (long long)warningMaxLength;

- (id)init;

@end
