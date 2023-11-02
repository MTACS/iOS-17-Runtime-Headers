
@interface WK_RTCVideoEncoderQpThresholds : NSObject {
    long long  _high;
    long long  _low;
}

@property (nonatomic, readonly) long long high;
@property (nonatomic, readonly) long long low;

- (long long)high;
- (id)initWithThresholdsLow:(long long)arg1 high:(long long)arg2;
- (long long)low;

@end
