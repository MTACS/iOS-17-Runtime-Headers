
@interface HMSymptom : NSObject <NSSecureCoding> {
    NSString * _localizedTitle;
    long long  _type;
}

@property (setter=hf_setGeneratedByHomeAppForDebuggingPurposes:, nonatomic) bool hf_generatedByHomeAppForDebuggingPurposes;
@property (nonatomic, readonly) NSString *hf_shortDescription;
@property (readonly, copy) NSString *localizedTitle;
@property (readonly) long long type;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)archive:(id)arg1;
+ (id)archiveSymptomDict:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)symptomWithType:(long long)arg1;
+ (id)unarchive:(id)arg1;
+ (id)unarchiveSymptomDict:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedTitle;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (bool)hf_generatedByHomeAppForDebuggingPurposes;
- (void)hf_setGeneratedByHomeAppForDebuggingPurposes:(bool)arg1;
- (id)hf_shortDescription;

@end
