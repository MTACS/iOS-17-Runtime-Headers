
@interface CRKWebClipBundleIdentifier : NSObject {
    NSString * _stringValue;
}

@property (getter=isSpecificWebClip, nonatomic, readonly) bool specificWebClip;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (getter=isWebClipHostApplication, nonatomic, readonly) bool webClipHostApplication;

+ (id)bundleIdentifierByLocatingWebClipBundleIdentifierInString:(id)arg1;
+ (id)specificWebClipPrefix;
+ (id)webClipBundleIdentifierInString:(id)arg1;
+ (id)webClipHostApplicationBundleIdentifier;

- (void).cxx_destruct;
- (id)init;
- (id)initWithString:(id)arg1;
- (bool)isSpecificWebClip;
- (bool)isWebClipHostApplication;
- (id)stringValue;

@end
