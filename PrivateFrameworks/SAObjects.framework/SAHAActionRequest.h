
@interface SAHAActionRequest : SADomainObject

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) long long executionOrder;
@property (nonatomic, retain) SAHAFilter *filter;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)actionRequest;
+ (id)actionRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)actions;
- (id)encodedClassName;
- (long long)executionOrder;
- (id)filter;
- (id)groupIdentifier;
- (void)setActions:(id)arg1;
- (void)setExecutionOrder:(long long)arg1;
- (void)setFilter:(id)arg1;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)hm_shortDescription;

// Image: /System/Library/PrivateFrameworks/HomeAutomationInternal.framework/HomeAutomationInternal

- (id)description;

@end
