
@interface ARWorldTrackingErrorData : NSObject <ARResultData, NSSecureCoding> {
    long long  _errorCode;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long errorCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (long long)errorCode;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1;
- (bool)isEqual:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (double)timestamp;

@end
