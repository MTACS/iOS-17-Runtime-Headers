
@interface HKCodedValueCollection : NSObject <HKCodedObject, NSCopying, NSSecureCoding> {
    NSArray * _codedValues;
}

@property (nonatomic, readonly) NSString *canonicalBloodPressureDisplay;
@property (nonatomic, readonly, copy) NSArray *codedValues;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool representsCanonicalBloodPressure;
@property (nonatomic, readonly) bool representsSingleBloodPressurePoint;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)codedValueCollectionWithCodedValues:(id)arg1;
+ (id)indexableKeyPathsWithPrefix:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)codedValues;
- (id)codingsForKeyPath:(id)arg1 error:(id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCodedValues:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthRecordsDaemon.framework/HealthRecordsDaemon

- (bool)representsCanonicalBloodPressure;
- (bool)representsSingleBloodPressurePoint;

// Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI

- (id)canonicalBloodPressureDisplay;
- (bool)representsCanonicalBloodPressure;

@end
