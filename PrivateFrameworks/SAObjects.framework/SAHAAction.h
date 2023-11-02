
@interface SAHAAction : SADomainObject

@property (nonatomic, copy) NSString *actionType;
@property (nonatomic, copy) NSString *attribute;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSArray *executionFlags;
@property (nonatomic) long long executionOrder;
@property (nonatomic) bool includeCompleteInformation;
@property (nonatomic, retain) SAHAAttributeValue *value;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)action;
+ (id)actionWithDictionary:(id)arg1 context:(id)arg2;

- (id)actionType;
- (id)attribute;
- (id)encodedClassName;
- (id)executionFlags;
- (long long)executionOrder;
- (id)groupIdentifier;
- (bool)includeCompleteInformation;
- (void)setActionType:(id)arg1;
- (void)setAttribute:(id)arg1;
- (void)setExecutionFlags:(id)arg1;
- (void)setExecutionOrder:(long long)arg1;
- (void)setIncludeCompleteInformation:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)value;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)hm_shortDescription;

// Image: /System/Library/PrivateFrameworks/HomeAutomationInternal.framework/HomeAutomationInternal

- (id)description;

@end
