
@interface BGProcessingTaskRequest : BGTaskRequest {
    bool  _requiresExternalPower;
    bool  _requiresNetworkConnectivity;
}

@property bool requiresExternalPower;
@property bool requiresNetworkConnectivity;

+ (Class)_correspondingTaskClass;
+ (id)_requestFromActivity:(id)arg1;

- (id)_activity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)requiresExternalPower;
- (bool)requiresNetworkConnectivity;
- (void)setRequiresExternalPower:(bool)arg1;
- (void)setRequiresNetworkConnectivity:(bool)arg1;

@end
