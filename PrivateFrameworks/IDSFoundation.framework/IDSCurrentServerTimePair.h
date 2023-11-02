
@interface IDSCurrentServerTimePair : NSObject {
    unsigned long long  _initialProcessMonotonicTimeInNanoSeconds;
    unsigned long long  _initialServerTimeInNanoSeconds;
    bool  _isAccurate;
}

@property (nonatomic, readonly) unsigned long long initialProcessMonotonicTimeInNanoSeconds;
@property (nonatomic, readonly) unsigned long long initialServerTimeInNanoSeconds;
@property (nonatomic, readonly) bool isAccurate;

- (id)initWithInitialProcessMonotonicTimeInNanoSeconds:(unsigned long long)arg1 initialServerTimeInNanoSeconds:(unsigned long long)arg2 isAccurate:(bool)arg3;
- (unsigned long long)initialProcessMonotonicTimeInNanoSeconds;
- (unsigned long long)initialServerTimeInNanoSeconds;
- (bool)isAccurate;

@end
