
@interface GEOReferenceTimeData : NSObject <NSSecureCoding> {
    struct timeval { 
        long long tv_sec; 
        int tv_usec; 
    }  _kernBoottime;
    double  _kernTime;
    double  _refError;
    double  _refTime;
}

@property (nonatomic, readonly) struct timeval { long long x1; int x2; } kernBootTime;
@property (nonatomic, readonly) double kernTime;
@property (nonatomic, readonly) double refError;
@property (nonatomic, readonly) double refTime;

+ (bool)supportsSecureCoding;

- (double)currentReferenceTime;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRefTime:(double)arg1 refError:(double)arg2 kernTime:(double)arg3 bootTime:(struct timeval { long long x1; int x2; })arg4;
- (struct timeval { long long x1; int x2; })kernBootTime;
- (double)kernTime;
- (double)refError;
- (double)refTime;

@end
