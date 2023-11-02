
@interface _HKQuantityDistributionData : NSObject <NSCopying, NSSecureCoding> {
    HKQuantity * _averageValue;
    NSArray * _contextIdentifiers;
    HKQuantity * _duration;
    NSDate * _endDate;
    NSArray * _histogramCounts;
    HKQuantity * _maximumValue;
    HKQuantity * _minimumBucketValue;
    HKQuantity * _minimumValue;
    NSDate * _startDate;
}

@property (nonatomic, readonly) HKQuantity *averageValue;
@property (nonatomic, readonly) NSArray *contextIdentifiers;
@property (nonatomic, readonly) HKQuantity *duration;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSArray *histogramCounts;
@property (nonatomic, readonly) HKQuantity *maximumValue;
@property (nonatomic, readonly) HKQuantity *minimumBucketValue;
@property (nonatomic, readonly) HKQuantity *minimumValue;
@property (nonatomic, readonly) NSDate *startDate;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)averageValue;
- (id)contextIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)histogramCounts;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 minimumBucketValue:(id)arg3 minimumValue:(id)arg4 maximumValue:(id)arg5 averageValue:(id)arg6 duration:(id)arg7 histogramCounts:(id)arg8;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 minimumBucketValue:(id)arg3 minimumValue:(id)arg4 maximumValue:(id)arg5 averageValue:(id)arg6 duration:(id)arg7 histogramCounts:(id)arg8 contextIdentifiers:(id)arg9;
- (id)maximumValue;
- (id)minimumBucketValue;
- (id)minimumValue;
- (id)startDate;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (id)quantityDistributionDataWithCodableQuantityDistributionData:(id)arg1 sourceTimeZone:(id)arg2;

- (id)codableQuantityDistributionData;

@end
