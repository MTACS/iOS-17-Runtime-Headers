
@interface SAHAActionResult : SADomainObject

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) SAHAEntity *entity;
@property (nonatomic, copy) NSString *outcome;
@property (nonatomic, copy) NSArray *relatedEntityIds;
@property (nonatomic, copy) NSString *requestActionId;
@property (nonatomic, copy) NSString *resultAttribute;
@property (nonatomic, retain) SAHAAttributeValue *resultValue;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)actionResult;
+ (id)actionResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)entity;
- (id)groupIdentifier;
- (id)outcome;
- (id)relatedEntityIds;
- (id)requestActionId;
- (id)resultAttribute;
- (id)resultValue;
- (void)setEntity:(id)arg1;
- (void)setOutcome:(id)arg1;
- (void)setRelatedEntityIds:(id)arg1;
- (void)setRequestActionId:(id)arg1;
- (void)setResultAttribute:(id)arg1;
- (void)setResultValue:(id)arg1;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)hm_shortDescription;

// Image: /System/Library/PrivateFrameworks/HomeAutomationInternal.framework/HomeAutomationInternal

- (id)description;

@end
