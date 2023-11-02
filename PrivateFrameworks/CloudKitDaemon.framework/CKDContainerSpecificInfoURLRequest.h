
@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest {
    NSString * _containerIdentifier;
    CKDContainerServerInfo * _containerServerInfo;
    bool  _requireUserIDs;
}

@property (nonatomic, copy) NSString *containerIdentifier;
@property (nonatomic, copy) CKDContainerServerInfo *containerServerInfo;
@property (nonatomic) bool requireUserIDs;

- (void).cxx_destruct;
- (bool)allowsAnonymousAccount;
- (bool)allowsAuthedAccount;
- (id)containerIdentifier;
- (id)containerServerInfo;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (bool)hasRequestBody;
- (id)initWithOperation:(id)arg1 containerIdentifier:(id)arg2;
- (long long)partitionType;
- (void)requestDidParseJSONObject:(id)arg1;
- (bool)requireUserIDs;
- (bool)requiresConfiguration;
- (bool)requiresDeviceID;
- (long long)serverType;
- (void)setContainerIdentifier:(id)arg1;
- (void)setContainerServerInfo:(id)arg1;
- (void)setRequireUserIDs:(bool)arg1;
- (id)url;
- (bool)usesCloudKitAuthToken;
- (bool)usesiCloudAuthToken;

@end
