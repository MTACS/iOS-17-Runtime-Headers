
@interface BPSCountWindowMetadata : NSObject <BPSWindowMetadata> {
    unsigned long long  _currentCount;
}

@property (nonatomic, readonly) unsigned long long currentCount;

+ (id)new;

- (unsigned long long)currentCount;
- (id)init;
- (id)initWithCurrentCount:(unsigned long long)arg1;

@end
