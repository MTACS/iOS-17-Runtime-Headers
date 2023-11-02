
@interface _SBSHardwareButtonEventConfiguration : NSObject {
    unsigned long long  _eventMask;
    long long  _maximumPriority;
}

@property (nonatomic) unsigned long long eventMask;
@property (nonatomic) long long maximumPriority;

- (id)description;
- (unsigned long long)eventMask;
- (long long)maximumPriority;
- (void)setEventMask:(unsigned long long)arg1;
- (void)setMaximumPriority:(long long)arg1;

@end
