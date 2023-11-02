
@interface MTPrunePromise : NSObject {
    MTMaterialLayer * _materialLayer;
    bool  _promiseFulfilled;
    NSDate * _timeStamp;
}

@property (getter=isPromiseFulfilled, nonatomic) bool promiseFulfilled;

- (void).cxx_destruct;
- (void)dealloc;
- (void)fulfillPromise;
- (id)initWithMaterialLayer:(id)arg1;
- (bool)isPromiseFulfilled;
- (void)setPromiseFulfilled:(bool)arg1;
- (double)timeIntervalSincePromise;

@end
