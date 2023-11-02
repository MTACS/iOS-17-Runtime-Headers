
@interface SRSpeechExpression : NSObject <NSCopying, NSSecureCoding> {
    double  _activation;
    double  _confidence;
    double  _dominance;
    double  _mood;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _timeRange;
    double  _valence;
    NSString * _version;
}

@property (nonatomic, readonly) double activation;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) double dominance;
@property (nonatomic, readonly) double mood;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property (nonatomic, readonly) double valence;
@property (nonatomic, readonly, copy) NSString *version;

+ (id)new;
+ (bool)supportsSecureCoding;

- (double)activation;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (double)dominance;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(id)arg1 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 confidence:(double)arg3 mood:(double)arg4 valence:(double)arg5 activation:(double)arg6 dominance:(double)arg7;
- (bool)isEqual:(id)arg1;
- (double)mood;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (double)valence;
- (id)version;

@end
