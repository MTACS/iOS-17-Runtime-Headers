
@interface FxStream : NSObject {
    struct FxStreamPriv { id x1; } * _priv;
}

- (id)createSampleAtTime:(double)arg1;
- (void)dealloc;
- (id)init;
- (id)pin;
- (id)provider;
- (void)setPin:(id)arg1;

@end
