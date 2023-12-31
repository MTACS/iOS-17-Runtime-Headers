
@interface SASServerBoundConfusionNetwork : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SASRecognition *rawRecognition;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)serverBoundConfusionNetwork;
+ (id)serverBoundConfusionNetworkWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)rawRecognition;
- (bool)requiresResponse;
- (void)setRawRecognition:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

- (bool)siriCore_supportedByLocalSession;
- (bool)siriCore_supportedByRemoteLimitedSession;

@end
