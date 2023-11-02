
@interface SHSignatureMetrics : NSObject <NSCopying, NSSecureCoding> {
    long long  _audioRecordingSource;
    NSDate * _sessionStartDate;
}

@property (nonatomic) long long audioRecordingSource;
@property (nonatomic, readonly) double sessionDuration;
@property (nonatomic, readonly) NSDate *sessionStartDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)audioRecordingSource;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionStartDate:(id)arg1;
- (double)sessionDuration;
- (id)sessionStartDate;
- (void)setAudioRecordingSource:(long long)arg1;

@end
