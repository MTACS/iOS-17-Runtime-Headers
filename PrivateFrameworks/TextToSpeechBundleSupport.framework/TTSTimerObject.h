
@interface TTSTimerObject : NSObject {
    id /* block */  _block;
    double  _endTime;
    long long  _intId;
    double  _remainingTime;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic) double endTime;
@property (nonatomic) long long intId;
@property (nonatomic) double remainingTime;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)dealloc;
- (id)description;
- (double)endTime;
- (long long)intId;
- (double)remainingTime;
- (void)setBlock:(id /* block */)arg1;
- (void)setEndTime:(double)arg1;
- (void)setIntId:(long long)arg1;
- (void)setRemainingTime:(double)arg1;

@end
