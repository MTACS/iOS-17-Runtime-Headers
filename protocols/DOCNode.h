
@protocol DOCNode <NSObject, NSCopying>

@required

- (long long)_doc_fileTypeCompare:(id <DOCNode>)arg1;
- (FPProviderDomain *)cachedDomain;
- (NSNumber *)childItemCount;
- (UTType *)contentType;
- (NSObject *)contentVersion;
- (NSProgress *)copyingProgress;
- (NSDate *)dateForSortingByRecents;
- (NSNumber *)deepItemCount;
- (NSString *)displayName;
- (NSDate *)doc_creationDate;
- (unsigned long long)doc_folderIconType;
- (bool)doc_isCollaborationInvitation;
- (bool)doc_isSMBSharepoint;
- (NSDate *)doc_lastUsedDate;
- (NSString *)domainDisplayName;
- (NSError *)downloadingError;
- (NSProgress *)downloadingProgress;
- (void)encodeNodeWithCoder:(NSCoder *)arg1;
- (void)fetchFPItem:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FPItem *, NSError *, void*
- (void)fetchParent:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <DOCNode> *, NSError *, void*
- (void)fetchParents:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)fetchURL:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (NSNumber *)fileSize;
- (NSString *)filename;
- (unsigned long long)folderType;
- (FPItem *)fpfs_fpItem;
- (id)identifier;
- (bool)isActionable;
- (bool)isAnyParentTrashed;
- (bool)isCloudItem;
- (bool)isContainer;
- (bool)isDownloaded;
- (bool)isDownloading;
- (bool)isExcludedFromSync;
- (bool)isExternalDownloadPlaceholder;
- (bool)isFolder;
- (bool)isPending;
- (bool)isReadable;
- (bool)isRecursivelyDownloaded;
- (bool)isRootItem;
- (bool)isShared;
- (bool)isSharedByCurrentUser;
- (bool)isTopLevelSharedItem;
- (bool)isTrashed;
- (bool)isUploaded;
- (bool)isUploading;
- (bool)isWritable;
- (NSArray *)itemDecorations;
- (long long)localizedStandardTagsCompareNode:(id <DOCNode>)arg1;
- (NSDate *)modificationDate;
- (NSURL *)nodeURL;
- (NSPersonNameComponents *)ownerNameComponents;
- (NSString *)providerDomainID;
- (NSString *)providerID;
- (bool)supportsFileSystemEnumeration;
- (NSArray *)tags;
- (DOCNodeThumbnailIdentifier *)thumbnailIdentifier;
- (NSString *)typeIdentifier;
- (NSError *)uploadingError;
- (NSProgress *)uploadingProgress;

@end
