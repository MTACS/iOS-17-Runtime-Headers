
@interface SASyncChunk : SABaseClientBoundCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, retain) SASyncAppMetaData *appMetaData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *intentSlotName;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *postGen;
@property (nonatomic, copy) NSString *preGen;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *toAdd;
@property (nonatomic, copy) NSArray *toRemove;
@property (nonatomic, copy) NSString *validity;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)chunk;
+ (id)chunkWithDictionary:(id)arg1 context:(id)arg2;

- (id)appBundleId;
- (id)appMetaData;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intentSlotName;
- (id)key;
- (bool)mutatingCommand;
- (id)postGen;
- (id)preGen;
- (bool)requiresResponse;
- (void)setAppBundleId:(id)arg1;
- (void)setAppMetaData:(id)arg1;
- (void)setIntentSlotName:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setPostGen:(id)arg1;
- (void)setPreGen:(id)arg1;
- (void)setToAdd:(id)arg1;
- (void)setToRemove:(id)arg1;
- (void)setValidity:(id)arg1;
- (id)toAdd;
- (id)toRemove;
- (id)validity;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (bool)siriCore_bufferingAllowedDuringActiveSession;
- (bool)siriCore_isRetryable;

@end