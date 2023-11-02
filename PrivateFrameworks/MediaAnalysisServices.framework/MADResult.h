
@interface MADResult : NSObject <NSSecureCoding> {
    unsigned long long  _executionNanoseconds;
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
    }  _timerange;
}

@property (readonly) unsigned long long executionNanoseconds;
@property (readonly) double executionTimeInterval;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timerange;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)executionNanoseconds;
- (double)executionTimeInterval;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setExecutionNanoseconds:(unsigned long long)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timerange;

@end
