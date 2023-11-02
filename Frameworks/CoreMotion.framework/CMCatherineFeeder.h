
@interface CMCatherineFeeder : NSObject {
    CMCatherineFeederInternal * _internal;
}

@property (nonatomic, readonly) CMCatherineFeederInternal *internal;

- (void)dealloc;
- (void)feedCatherine:(double)arg1 confidence:(double)arg2;
- (id)init;
- (id)internal;

@end
