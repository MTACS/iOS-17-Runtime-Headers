
@interface CAMCaptureCallbackReceipt : NSObject {
    long long  _callback;
    double  _secondsSinceBegin;
}

@property (nonatomic, readonly) long long callback;
@property (nonatomic, readonly) double secondsSinceBegin;

- (long long)callback;
- (id)initWithCallback:(long long)arg1 duration:(double)arg2;
- (double)secondsSinceBegin;

@end
