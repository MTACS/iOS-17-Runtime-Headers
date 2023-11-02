
@interface SRDeletionRecord : NSObject <NSSecureCoding, SRSampleExporting, SRSampling> {
    NSString * __originatingDeviceIdentifier;
    double  _endTime;
    long long  _extendedReason;
    _Atomic long long  _reason;
    double  _startTime;
}

@property (copy) NSString *_originatingDeviceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double endTime;
@property long long extendedReason;
@property (readonly) unsigned long long hash;
@property long long reason;
@property double startTime;
@property (readonly) Class superclass;

+ (void)initialize;
+ (bool)supportsSecureCoding;
+ (id)tombstoneWithStartTime:(double)arg1 endTime:(double)arg2 extendedReason:(long long)arg3;
+ (id)tombstoneWithStartTime:(double)arg1 endTime:(double)arg2 extendedReason:(long long)arg3 originatingDeviceIdentifier:(id)arg4;
+ (id)tombstoneWithStartTime:(double)arg1 endTime:(double)arg2 reason:(long long)arg3;
+ (id)tombstoneWithStartTime:(double)arg1 endTime:(double)arg2 reason:(long long)arg3 originatingDeviceIdentifier:(id)arg4;

- (id)_originatingDeviceIdentifier;
- (id)binarySampleRepresentation;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (long long)extendedReason;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)reason;
- (void)setEndTime:(double)arg1;
- (void)setExtendedReason:(long long)arg1;
- (void)setReason:(long long)arg1;
- (void)setStartTime:(double)arg1;
- (void)set_originatingDeviceIdentifier:(id)arg1;
- (id)sr_dictionaryRepresentation;
- (double)startTime;

@end
