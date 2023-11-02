
@interface NIVisionInput : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _devicePose;
    double  _lightEstimate;
    bool  _majorRelocalization;
    bool  _minorRelocalization;
    double  _timestamp;
    long long  _trackingState;
}

@property (readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } devicePose;
@property (readonly) double lightEstimate;
@property (readonly) bool majorRelocalization;
@property (readonly) bool minorRelocalization;
@property (readonly) double timestamp;
@property (readonly) long long trackingState;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })devicePose;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1 devicePose:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 trackingState:(long long)arg3 lightEstimate:(double)arg4 majorRelocalization:(bool)arg5 minorRelocalization:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (double)lightEstimate;
- (bool)majorRelocalization;
- (bool)minorRelocalization;
- (void)overrideTimestamp:(double)arg1;
- (double)timestamp;
- (long long)trackingState;

@end
