
@interface ICQRemoteContext : NSObject <NSSecureCoding> {
    NSData * _flowOptionsData;
    ICQLink * _link;
    ICQOffer * _offer;
    NSData * _preloadedRemoteUIData;
    NSString * _presentingSceneBundleIdentifier;
    NSString * _presentingSceneIdentifier;
}

@property (nonatomic, readonly) NSData *flowOptionsData;
@property (nonatomic, readonly) ICQLink *link;
@property (nonatomic, readonly) ICQOffer *offer;
@property (nonatomic, readonly) NSData *preloadedRemoteUIData;
@property (nonatomic, copy) NSString *presentingSceneBundleIdentifier;
@property (nonatomic, copy) NSString *presentingSceneIdentifier;

+ (id)ICQContextFromRemoteAlertContext:(id)arg1;
+ (id)contextFromDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_serializedData;
- (void)encodeWithCoder:(id)arg1;
- (id)flowOptionsData;
- (id)initWithCoder:(id)arg1;
- (id)initWithOffer:(id)arg1 link:(id)arg2 flowOptionsData:(id)arg3 preloadedRemoteUIData:(id)arg4;
- (id)link;
- (id)offer;
- (id)preloadedRemoteUIData;
- (id)presentingSceneBundleIdentifier;
- (id)presentingSceneIdentifier;
- (void)setPresentingSceneBundleIdentifier:(id)arg1;
- (void)setPresentingSceneIdentifier:(id)arg1;
- (id)toDictionary;

@end
