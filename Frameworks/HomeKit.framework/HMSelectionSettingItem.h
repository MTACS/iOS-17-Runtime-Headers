
@interface HMSelectionSettingItem : NSObject <HFStateDumpBuildable, NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
    NSString * _localizedTitle;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *localizedTitle;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *title;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)localizedTitle;
- (id)title;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
