
@interface TAEventBufferSettings : NSObject {
    unsigned long long  _bufferCapacity;
    double  _bufferTimeIntervalOfRetention;
}

@property (nonatomic, readonly) unsigned long long bufferCapacity;
@property (nonatomic, readonly) double bufferTimeIntervalOfRetention;

- (unsigned long long)bufferCapacity;
- (double)bufferTimeIntervalOfRetention;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBufferCapacity:(unsigned long long)arg1 bufferTimeIntervalOfRetention:(double)arg2;
- (id)initWithBufferCapacityOrDefault:(id)arg1 bufferTimeIntervalOfRetentionOrDefault:(id)arg2;

@end
