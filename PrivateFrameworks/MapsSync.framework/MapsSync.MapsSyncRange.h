
@interface MapsSync.MapsSyncRange : NSObject {
    void _range;
}

@property (nonatomic, readonly) long long limit;
@property (nonatomic, readonly) long long offset;

- (id)init;
- (id)initWithOffset:(long long)arg1 limit:(long long)arg2;
- (long long)limit;
- (long long)offset;

@end
