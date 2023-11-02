
@interface TFFeedbackHandleConfiguration : NSObject <NSCopying> {
    NSString * _bundleIdentifier;
    NSString * _incidentId;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *incidentId;

+ (id)configurationFromUserInfo:(id)arg1;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encodedAsUserInfo;
- (id)incidentId;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleURL:(id)arg1;
- (void)setIncidentId:(id)arg1;

@end
