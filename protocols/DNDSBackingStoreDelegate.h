
@protocol DNDSBackingStoreDelegate <NSObject>

@required

- (NSDictionary *)backingStore:(id <DNDSBackingStore>)arg1 migrateDictionaryRepresentation:(NSDictionary *)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4;

@end
