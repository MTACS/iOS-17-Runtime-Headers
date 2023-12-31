
@interface _AFInterstitialAction : NSObject {
    NSString * _displayKey;
    double  _duration;
    long long  _phase;
    NSString * _speakableKey;
}

@property (nonatomic, readonly, copy) NSString *displayKey;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) long long phase;
@property (nonatomic, readonly, copy) NSString *speakableKey;

- (void).cxx_destruct;
- (id)displayKey;
- (double)duration;
- (id)initWithDuration:(double)arg1;
- (id)initWithPhase:(long long)arg1 displayKey:(id)arg2 speakableKey:(id)arg3;
- (long long)phase;
- (id)speakableKey;

@end
