
@interface ATXAppDirectoryEventMetadata : NSObject <ATXProtoBufWrapper, NSSecureCoding> {
    NSNumber * _bundleIdInTopAppsVisible;
    NSNumber * _userLaunchedAppBeforeLeaving;
}

@property (nonatomic, retain) NSNumber *bundleIdInTopAppsVisible;
@property (nonatomic, retain) NSNumber *userLaunchedAppBeforeLeaving;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdInTopAppsVisible;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBundleIdInTopAppsVisible:(id)arg1 userLaunchedAppBeforeLeaving:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXAppDirectoryEventMetadata:(id)arg1;
- (id)jsonDict;
- (id)proto;
- (void)setBundleIdInTopAppsVisible:(id)arg1;
- (void)setUserLaunchedAppBeforeLeaving:(id)arg1;
- (id)userLaunchedAppBeforeLeaving;

@end
