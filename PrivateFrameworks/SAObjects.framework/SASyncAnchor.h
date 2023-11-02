
@interface SASyncAnchor : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, retain) SASyncAppMetaData *appMetaData;
@property (nonatomic) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *generation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *intentSlotName;
@property (nonatomic, copy) NSString *key;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSNumber *suspendDurationInSeconds;
@property (nonatomic, copy) NSString *suspendReason;
@property (nonatomic, copy) NSString *validity;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)anchor;
+ (id)anchorWithDictionary:(id)arg1 context:(id)arg2;

- (id)appBundleId;
- (id)appMetaData;
- (long long)count;
- (id)encodedClassName;
- (id)generation;
- (id)groupIdentifier;
- (id)intentSlotName;
- (id)key;
- (void)setAppBundleId:(id)arg1;
- (void)setAppMetaData:(id)arg1;
- (void)setCount:(long long)arg1;
- (void)setGeneration:(id)arg1;
- (void)setIntentSlotName:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setSuspendDurationInSeconds:(id)arg1;
- (void)setSuspendReason:(id)arg1;
- (void)setValidity:(id)arg1;
- (id)suspendDurationInSeconds;
- (id)suspendReason;
- (id)validity;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

+ (id)_af_normalizedKeyForKey:(id)arg1 appBundleID:(id)arg2 syncSlotName:(id)arg3;

- (bool)_af_isValid;
- (id)_af_normalizedKey;

@end