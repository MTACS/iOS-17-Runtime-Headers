
@interface APCListenerResultData : NSObject {
    unsigned long long  _completionTime;
}

@property (nonatomic) unsigned long long completionTime;

- (unsigned long long)completionTime;
- (id)initWithPasscodeDurationNSec:(unsigned long long)arg1;
- (bool)isValid;
- (void)reset;
- (void)setCompletionTime:(unsigned long long)arg1;

@end
