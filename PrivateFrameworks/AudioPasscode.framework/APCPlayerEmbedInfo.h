
@interface APCPlayerEmbedInfo : NSObject {
    unsigned long long  _estPasscodeDuration;
    unsigned long long  _measPasscodeDuration;
}

@property (nonatomic, readonly) unsigned long long estPasscodeDuration;
@property (nonatomic) unsigned long long measPasscodeDuration;

- (unsigned long long)estPasscodeDuration;
- (id)initWithPasscodeDurationNSec:(unsigned long long)arg1;
- (bool)isValid;
- (unsigned long long)measPasscodeDuration;
- (void)setMeasPasscodeDuration:(unsigned long long)arg1;

@end
