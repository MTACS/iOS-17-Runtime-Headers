
@interface SACrashDetectionEvent : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    bool  _isNotified;
    CLLocation * _location;
    long long  _response;
    NSDate * _timeOfResolution;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) double elapsed;
@property (nonatomic) bool isNotified;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) long long response;
@property (nonatomic, readonly) NSDate *timeOfResolution;

+ (double)crashDetectionEventTimeout;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (double)elapsed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeOfDetection:(id)arg1 timeOfResolution:(id)arg2 response:(long long)arg3 location:(id)arg4;
- (id)initWithTimeOfDetection:(id)arg1 timeOfResolution:(id)arg2 response:(long long)arg3 location:(id)arg4 isNotified:(bool)arg5;
- (bool)isNotified;
- (id)location;
- (long long)response;
- (void)setIsNotified:(bool)arg1;
- (id)timeOfResolution;

@end
