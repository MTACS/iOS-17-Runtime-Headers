
@protocol PLCloudDeletable <NSObject>

@required

+ (long long)cloudDeletionTypeForTombstone:(NSDictionary *)arg1;
+ (NSString *)cloudUUIDKeyForDeletion;

- (short)cloudDeleteState;
- (long long)cloudDeletionType;
- (NSString *)cloudUUIDForDeletion;
- (void)setCloudDeleteState:(short)arg1;

@end
