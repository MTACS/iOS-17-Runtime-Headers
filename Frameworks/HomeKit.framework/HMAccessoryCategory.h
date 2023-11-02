
@interface HMAccessoryCategory : NSObject <HMFDumpState, NSCopying, NSSecureCoding> {
    NSString * _categoryType;
    NSString * _name;
}

@property (readonly, copy) NSString *categoryType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hf_isMediaAccessory;
@property (readonly) bool isTelevisionAccessoryCategory;
@property (readonly) bool isWiFiRouterAccessoryCategory;
@property (readonly, copy) NSString *localizedDescription;
@property (readonly, copy) NSString *name;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)categoryType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 name:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isTelevisionAccessoryCategory;
- (bool)isWiFiRouterAccessoryCategory;
- (id)localizedDescription;
- (id)localizedDescriptionPlural;
- (id)name;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_compatibleServiceTypes;
- (bool)hf_isMediaAccessory;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)categoryForProductClass:(long long)arg1;
+ (id)categoryForProductInfo:(id)arg1;
+ (id)categoryIdentifierForCategory:(id)arg1;
+ (id)categoryWithCategoryIdentifier:(id)arg1;
+ (id)categoryWithIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

+ (id)categoryForProductClass:(long long)arg1;
+ (id)categoryForProductInfo:(id)arg1;
+ (id)categoryIdentifierForCategory:(id)arg1;
+ (id)categoryWithCategoryIdentifier:(id)arg1;
+ (id)categoryWithIdentifier:(id)arg1;

@end
