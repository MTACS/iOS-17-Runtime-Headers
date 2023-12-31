
@interface MTTimerTimeInterval : NSObject <MTDictionarySerializable, MTTimerTime> {
    double  _remainingTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double remainingTime;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeInterval:(double)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTime:(id)arg1;
- (double)remainingTime;

@end
