
@protocol __NSTextRunStorageDataSource <NSObject>

@required

- (bool)isCountableDataSource;

@optional

- (<NSTextLocation> *)baseLocation;
- (<NSTextLocation> *)locationFromLocation:(id <NSTextLocation>)arg1 withOffset:(long long)arg2;
- (long long)offsetFromLocation:(id <NSTextLocation>)arg1 toLocation:(id <NSTextLocation>)arg2;

@end
