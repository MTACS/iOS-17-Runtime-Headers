
@interface SXRepeatedLayoutTask : SXLayoutTask {
    double  _elapsedDuration;
    unsigned long long  _repeatCount;
}

@property (nonatomic, readonly) double elapsedDuration;
@property (nonatomic, readonly) unsigned long long repeatCount;

- (double)elapsedDuration;
- (id)initWithTask:(id)arg1 result:(id)arg2;
- (unsigned long long)repeatCount;

@end
