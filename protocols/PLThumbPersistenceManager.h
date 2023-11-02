
@protocol PLThumbPersistenceManager <NSObject>

@required

- (NSString *)_debugDescription;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(NSString *)arg1;
- (struct CGImage { }*)createImageWithIdentifier:(NSString *)arg1 orIndex:(unsigned long long)arg2;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(NSString *)arg1 withToken:(id)arg2;
- (NSData *)imageDataWithIdentifier:(NSString *)arg1 orIndex:(unsigned long long)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8;
- (bool)isReadOnly;
- (NSString *)path;
- (void)preheatDataForThumbnailIndexes:(NSIndexSet *)arg1;
- (bool)usesThumbIdentifiers;
- (bool)validateData:(NSData *)arg1 withToken:(NSString *)arg2;

@optional

- (void)deleteEntryWithIdentifier:(NSString *)arg1 orIndex:(unsigned long long)arg2 uuid:(NSString *)arg3;
- (bool)setImageForEntry:(PLImageContainer *)arg1 withIdentifier:(NSString *)arg2 orIndex:(unsigned long long)arg3 photoUUID:(NSString *)arg4 options:(NSDictionary *)arg5;
- (NSString *)thumbnailPathForThumbIdentifier:(NSString *)arg1;

@end
