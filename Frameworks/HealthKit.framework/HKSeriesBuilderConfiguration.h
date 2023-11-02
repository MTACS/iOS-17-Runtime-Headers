
@interface HKSeriesBuilderConfiguration : HKTaskConfiguration {
    HKDevice * _device;
    NSUUID * _workoutBuilderID;
}

@property (nonatomic, readonly, copy) HKDevice *device;
@property (nonatomic, readonly, copy) NSUUID *workoutBuilderID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 workoutBuilderID:(id)arg2;
- (id)workoutBuilderID;

@end
