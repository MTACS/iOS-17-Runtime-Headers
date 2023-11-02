
@protocol CKVDonatorProvider

@required

- (KVDonator *)donatorWithItemType:(long long)arg1 originAppId:(NSString *)arg2 error:(id*)arg3;
- (KVDonator *)donatorWithItemType:(long long)arg1 originAppId:(NSString *)arg2 userId:(NSString *)arg3 error:(id*)arg4;

@end
