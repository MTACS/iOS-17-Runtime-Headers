
@interface SYUserActivityIdentifierInfo : NSObject <NSSecureCoding, SYUserActivityInfo> {
    NSString * _activityType;
    NSURL * _canonicalURL;
    NSString * _persistentIdentifier;
    NSString * _targetContentIdentifier;
    NSURL * _webpageURL;
}

@property (readonly, copy) NSString *activityType;
@property (copy) NSURL *canonicalURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSString *persistentIdentifier;
@property (readonly) Class superclass;
@property (copy) NSString *targetContentIdentifier;
@property (copy) NSURL *webpageURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityType;
- (id)canonicalURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithActivityType:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToActivityIdentifierInfo:(id)arg1;
- (id)persistentIdentifier;
- (void)setCanonicalURL:(id)arg1;
- (void)setPersistentIdentifier:(id)arg1;
- (void)setTargetContentIdentifier:(id)arg1;
- (void)setWebpageURL:(id)arg1;
- (id)targetContentIdentifier;
- (id)webpageURL;

@end
