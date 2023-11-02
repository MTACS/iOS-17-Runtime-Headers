
@interface HKCodedQuantity : NSObject <NSCopying, NSSecureCoding> {
    HKMedicalCoding * _comparatorCoding;
    NSString * _rawValue;
    HKMedicalCoding * _unitCoding;
}

@property (nonatomic, readonly, copy) HKMedicalCoding *comparatorCoding;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly, copy) NSString *localizedValue;
@property (nonatomic, readonly, copy) NSNumber *numberValue;
@property (nonatomic, readonly, copy) NSString *rawValue;
@property (nonatomic, readonly, copy) HKMedicalCoding *unitCoding;
@property (nonatomic, readonly, copy) NSString *value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_numberFormatter;
+ (id)codedQuantityWithValue:(id)arg1 comparatorCoding:(id)arg2 unitCoding:(id)arg3;
+ (id)codedQuantityWithValue:(id)arg1 unitCoding:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)comparatorCoding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRawValue:(id)arg1 comparatorCoding:(id)arg2 unitCoding:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)localizedValue;
- (id)numberValue;
- (id)quantityRepresentationWithUCUMConverter:(id)arg1 error:(id*)arg2;
- (id)rawValue;
- (id)unitCoding;
- (id)value;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)_shortDisplayStringForComparatorCode:(id)arg1;
- (id)displayString;

@end
