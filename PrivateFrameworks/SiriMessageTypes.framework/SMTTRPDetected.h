
@interface SMTTRPDetected : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _generatedHostTime;
    NSString * _lastTRPCandidateId;
    NSString * _requestId;
    double  _trpDetectedAudioTimeStamp;
}

@property (nonatomic, readonly) unsigned long long generatedHostTime;
@property (nonatomic, readonly, copy) NSString *lastTRPCandidateId;
@property (nonatomic, readonly, copy) NSString *requestId;
@property (nonatomic, readonly) double trpDetectedAudioTimeStamp;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)generatedHostTime;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeneratedHostTime:(unsigned long long)arg1 lastTRPCandidateId:(id)arg2 trpDetectedAudioTimeStamp:(double)arg3;
- (id)initWithGeneratedHostTime:(unsigned long long)arg1 lastTRPCandidateId:(id)arg2 trpDetectedAudioTimeStamp:(double)arg3 requestId:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)lastTRPCandidateId;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)requestId;
- (double)trpDetectedAudioTimeStamp;

@end
