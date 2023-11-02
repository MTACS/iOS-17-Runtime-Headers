
@interface RMMediaSessionOptions : NSObject {
    long long  _clientMode;
    unsigned long long  _predictionIntervalMicroseconds;
}

@property (nonatomic) long long clientMode;
@property (nonatomic) unsigned long long predictionIntervalMicroseconds;

- (long long)clientMode;
- (id)init;
- (unsigned long long)predictionIntervalMicroseconds;
- (void)setClientMode:(long long)arg1;
- (void)setPredictionIntervalMicroseconds:(unsigned long long)arg1;

@end
