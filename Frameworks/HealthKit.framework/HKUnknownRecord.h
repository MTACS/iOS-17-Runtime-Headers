
@interface HKUnknownRecord : HKMedicalRecord <NSCopying, NSSecureCoding> {
    NSString * _displayName;
}

@property (readonly, copy) NSString *displayName;
@property (readonly, copy) HKUnknownRecordType *unknownRecordType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)_isConcreteObjectClass;
+ (id)_newUnknownRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 displayName:(id)arg13 config:(id /* block */)arg14;
+ (id)defaultDisplayString;
+ (bool)supportsEquivalence;
+ (bool)supportsSecureCoding;
+ (id)unknownRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 displayName:(id)arg12;
+ (id)unknownRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(bool)arg3 modifiedDate:(id)arg4 originIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 displayName:(id)arg13;

- (void).cxx_destruct;
- (void)_setDisplayName:(id)arg1;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration { unsigned long long x1; unsigned int x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackDisplayString;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (long long)recordCategoryType;
- (id)unknownRecordType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_dataEntityClass;

// Image: /System/Library/PrivateFrameworks/HealthRecordsExtraction.framework/HealthRecordsExtraction

+ (id)medicalRecordFromClinicalItem:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (void)fetchConceptRoomItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchDetailItemsWithHealthRecordsStore:(id)arg1 conceptStore:(id)arg2 completion:(id /* block */)arg3;
- (id)meaningfulDateString;
- (id)title;
- (id)titleDisplayStringForDetailViewController;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)sortDateTitle;

@end
