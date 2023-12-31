
@interface NFCTagCommandConfiguration : NSObject <NSCopying> {
    unsigned long long  _maximumRetries;
    double  _retryInterval;
}

@property (nonatomic) unsigned long long maximumRetries;
@property (nonatomic) double retryInterval;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)maximumRetries;
- (double)retryInterval;
- (void)setMaximumRetries:(unsigned long long)arg1;
- (void)setRetryInterval:(double)arg1;

@end
