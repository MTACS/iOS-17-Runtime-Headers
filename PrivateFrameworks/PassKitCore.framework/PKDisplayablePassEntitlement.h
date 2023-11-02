
@interface PKDisplayablePassEntitlement : NSObject <NSCopying, NSSecureCoding, PKIdentifiable> {
    bool  _clearGroupWhenSelected;
    unsigned long long  _displayStyle;
    PKPassEntitlement * _entitlement;
    NSString * _entitlementTemplate;
    long long  _groupPriority;
    NSString * _iconName;
    NSString * _localizedGroup;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
    PKPassSharedEntitlement * _sharedEntitlement;
    NSDictionary * _templateFields;
    NSNumber * _value;
}

@property (nonatomic) bool clearGroupWhenSelected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayStyle;
@property (nonatomic, readonly) PKPassEntitlement *entitlement;
@property (nonatomic, readonly) NSString *entitlementIdentifier;
@property (nonatomic) long long groupPriority;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *iconName;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic, retain) NSString *localizedGroup;
@property (nonatomic, retain) NSString *localizedSubtitle;
@property (nonatomic, retain) NSString *localizedTitle;
@property (nonatomic, readonly) PKPassSharedEntitlement *sharedEntitlement;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *value;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)localizedEntitlementFromCarKeyEntitlement:(id)arg1 pass:(id)arg2;
+ (id)localizedEntitlementsFromDisplayableEntitlements:(id)arg1 pass:(id)arg2;
+ (void)localizedEntitlementsFromDisplayableEntitlements:(id)arg1 pass:(id)arg2 useCachedTemplates:(bool)arg3 completion:(id /* block */)arg4;
+ (void)localizedEntitlementsFromEntitlements:(id)arg1 pass:(id)arg2 useCachedTemplates:(bool)arg3 completion:(id /* block */)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)clearGroupWhenSelected;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)displayStyle;
- (void)encodeWithCoder:(id)arg1;
- (id)entitlement;
- (id)entitlementIdentifier;
- (long long)groupPriority;
- (unsigned long long)hash;
- (id)iconName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedGroup;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (void)replaceEntitlementWithSharedEntitlement:(id)arg1;
- (void)setClearGroupWhenSelected:(bool)arg1;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (void)setGroupPriority:(long long)arg1;
- (void)setIconName:(id)arg1;
- (void)setLocalizedGroup:(id)arg1;
- (void)setLocalizedSubtitle:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setValue:(id)arg1;
- (id)sharedEntitlement;
- (id)value;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (id)identifier;

@end
