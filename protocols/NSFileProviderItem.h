
@protocol NSFileProviderItem <NSObject>

@required

- (NSString *)filename;
- (NSString *)itemIdentifier;
- (NSString *)parentItemIdentifier;

@optional

- (unsigned long long)capabilities;
- (NSNumber *)childItemCount;
- (NSDate *)contentModificationDate;
- (long long)contentPolicy;
- (UTType *)contentType;
- (NSDate *)creationDate;
- (NSNumber *)documentSize;
- (NSError *)downloadingError;
- (NSDictionary *)extendedAttributes;
- (NSNumber *)favoriteRank;
- (unsigned long long)fileSystemFlags;
- (bool)isDownloaded;
- (bool)isDownloading;
- (bool)isMostRecentVersionDownloaded;
- (bool)isShared;
- (bool)isSharedByCurrentUser;
- (bool)isTrashed;
- (bool)isUploaded;
- (bool)isUploading;
- (NSFileProviderItemVersion *)itemVersion;
- (NSDate *)lastUsedDate;
- (NSPersonNameComponents *)mostRecentEditorNameComponents;
- (NSPersonNameComponents *)ownerNameComponents;
- (NSString *)symlinkTargetPath;
- (NSData *)tagData;
- (struct NSFileProviderTypeAndCreator { unsigned int x1; unsigned int x2; })typeAndCreator;
- (NSString *)typeIdentifier;
- (NSError *)uploadingError;
- (NSDictionary *)userInfo;
- (NSData *)versionIdentifier;

@end
