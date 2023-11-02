
@interface TRITaskAttributionInternalInsecure : NSObject <NSCopying, TRITaskAttributing> {
    NSString * _applicationBundleIdentifier;
    TRIDownloadOptions * _networkOptions;
    NSString * _teamIdentifier;
    int  _triCloudKitContainer;
}

@property (nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) TRIDownloadOptions *networkOptions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *teamIdentifier;
@property (nonatomic, readonly) int triCloudKitContainer;

+ (id)taskAttributionFirstPartyWithNetworkOptions:(id)arg1;
+ (id)taskAttributionFromPersistedTask:(id)arg1;
+ (id)taskAttributionWithTeamIdentifier:(id)arg1 triCloudKitContainer:(int)arg2 applicationBundleIdentifier:(id)arg3 networkOptions:(id)arg4;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)asPersistedTaskAttribution;
- (id)copyWithReplacementApplicationBundleIdentifier:(id)arg1;
- (id)copyWithReplacementNetworkOptions:(id)arg1;
- (id)copyWithReplacementTeamIdentifier:(id)arg1;
- (id)copyWithReplacementTriCloudKitContainer:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTeamIdentifier:(id)arg1 triCloudKitContainer:(int)arg2 applicationBundleIdentifier:(id)arg3 networkOptions:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTaskAttribution:(id)arg1;
- (id)networkOptions;
- (id)teamIdentifier;
- (int)triCloudKitContainer;

@end
