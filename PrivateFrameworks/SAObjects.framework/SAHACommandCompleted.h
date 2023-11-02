
@interface SAHACommandCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSArray *actionResults;
@property (nonatomic, copy) NSString *clientValidity;
@property (nonatomic, copy) NSString *commandOutcome;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSURL *homeIdentifier;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *serverValidity;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)commandCompleted;
+ (id)commandCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)actionResults;
- (id)clientValidity;
- (id)commandOutcome;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)homeIdentifier;
- (bool)requiresResponse;
- (id)serverValidity;
- (void)setActionResults:(id)arg1;
- (void)setClientValidity:(id)arg1;
- (void)setCommandOutcome:(id)arg1;
- (void)setHomeIdentifier:(id)arg1;
- (void)setServerValidity:(id)arg1;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)hm_contentDescription;
- (id)hm_headerDescription;
- (id)hm_shortDescription;

// Image: /System/Library/PrivateFrameworks/HomeAutomationInternal.framework/HomeAutomationInternal

- (id)description;

@end
