
@interface SHSignature : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * __ID;
    NSDate * _audioStartDate;
    NSData * _dataRepresentation;
    SHSignatureMetrics * _metrics;
    AVAudioTime * _time;
}

@property (nonatomic, readonly) NSUUID *_ID;
@property (nonatomic, retain) NSDate *audioStartDate;
@property (nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic, readonly) double duration;
@property (nonatomic, copy) SHSignatureMetrics *metrics;
@property (nonatomic, retain) AVAudioTime *time;

+ (id)signatureFromData:(id)arg1 atTime:(id)arg2 error:(id*)arg3;
+ (id)signatureWithDataRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_ID;
- (id)_audioRepresentation;
- (id)_startDateBasedUponAudioTime:(id)arg1;
- (id)audioStartDate;
- (void)commonSetupWithID:(id)arg1 dataRepresentation:(id)arg2 startTime:(id)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)dataRepresentation;
- (id)debugDescription;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1 error:(id*)arg2;
- (id)initWithID:(id)arg1 dataRepresentation:(id)arg2 startTime:(id)arg3 error:(id*)arg4;
- (id)metrics;
- (void)setAudioStartDate:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setTime:(id)arg1;
- (id)time;

@end
