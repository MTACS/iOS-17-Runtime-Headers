
@interface SFTranscription : NSObject <NSCopying, NSSecureCoding> {
    double  _averagePauseDuration;
    NSString * _formattedString;
    NSArray * _segments;
    double  _speakingRate;
}

@property (nonatomic, readonly) double averagePauseDuration;
@property (nonatomic, readonly, copy) NSString *formattedString;
@property (nonatomic, readonly, copy) NSArray *segments;
@property (nonatomic, readonly) double speakingRate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithSegments:(id)arg1 formattedString:(id)arg2 speakingRate:(double)arg3 averagePauseDuration:(double)arg4;
- (double)averagePauseDuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedString;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)segments;
- (double)speakingRate;

@end
