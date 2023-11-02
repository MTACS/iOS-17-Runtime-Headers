
@interface SAHAIdentifierListFilter : SAHAFilter

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSArray *identifiers;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)identifierListFilter;
+ (id)identifierListFilterWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)identifiers;
- (void)setIdentifiers:(id)arg1;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)hm_shortDescription;

// Image: /System/Library/PrivateFrameworks/HomeAutomationInternal.framework/HomeAutomationInternal

- (id)description;

@end
