
@interface FPTime : NSObject {
    unsigned long long  _machAbsoluteTime;
    unsigned long long  _machContinuousTime;
    double  _wallTime;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) unsigned long long machAbsoluteTime;
@property (nonatomic, readonly) unsigned long long machAbsoluteTimeNsec;
@property (nonatomic, readonly) unsigned long long machContinuousTime;
@property (nonatomic, readonly) unsigned long long machContinuousTimeNsec;
@property (nonatomic, readonly) double wallTime;

+ (id)now;

- (id)date;
- (id)init;
- (unsigned long long)machAbsoluteTime;
- (unsigned long long)machAbsoluteTimeNsec;
- (unsigned long long)machContinuousTime;
- (unsigned long long)machContinuousTimeNsec;
- (double)wallTime;

@end
