
@protocol NNSyncableSection <NSObject>

@required

- (NSString *)sync_colorHexString;
- (NSArray *)sync_headlines;
- (NSString *)sync_identifier;
- (NSString *)sync_name;
- (unsigned long long)sync_type;

@end
