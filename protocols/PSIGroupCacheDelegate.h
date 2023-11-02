
@protocol PSIGroupCacheDelegate <NSObject>

@required

- (unsigned long long)updateGroupForText:(NSString *)arg1 identifier:(NSString *)arg2 category:(unsigned long long)arg3 owningGroupId:(unsigned long long)arg4;

@end
