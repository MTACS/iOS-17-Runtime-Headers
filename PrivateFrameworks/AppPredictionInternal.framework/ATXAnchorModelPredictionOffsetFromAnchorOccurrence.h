
@interface ATXAnchorModelPredictionOffsetFromAnchorOccurrence : NSObject <NSSecureCoding> {
    double  _endSecondsAfterAnchor;
    double  _startSecondsAfterAnchor;
}

@property (nonatomic, readonly) double endSecondsAfterAnchor;
@property (nonatomic, readonly) double startSecondsAfterAnchor;

+ (bool)supportsSecureCoding;

- (bool)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)endSecondsAfterAnchor;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartSecondsAfterAnchor:(double)arg1 endSecondsAfterAnchor:(double)arg2;
- (bool)isEqual:(id)arg1;
- (double)startSecondsAfterAnchor;

@end
