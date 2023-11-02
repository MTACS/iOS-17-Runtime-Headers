
@interface HKHRSampleClassificationCollection : NSObject <NSSecureCoding> {
    NSArray * _classifications;
    NSNumber * _dayIndex;
    NSString * _majorityTimeZone;
}

@property (nonatomic, retain) NSArray *classifications;
@property (nonatomic, copy) NSNumber *dayIndex;
@property (nonatomic, copy) NSString *majorityTimeZone;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)classifications;
- (id)dayIndex;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClassifications:(id)arg1 dayIndex:(id)arg2 majorityTimeZone:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)majorityTimeZone;
- (void)setClassifications:(id)arg1;
- (void)setDayIndex:(id)arg1;
- (void)setMajorityTimeZone:(id)arg1;

@end
