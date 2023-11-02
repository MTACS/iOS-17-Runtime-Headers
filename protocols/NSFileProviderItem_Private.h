
@protocol NSFileProviderItem_Private <NSFileProviderItem>

@optional

- (NSArray *)conflictingVersions;
- (NSString *)containerDisplayName;
- (NSString *)displayName;
- (NSString *)fileSystemFilename;
- (NSURL *)fileURL;
- (NSPersonNameComponents *)fp_addedByNameComponents;
- (NSSet *)fp_cloudContainerClientBundleIdentifiers;
- (NSString *)fp_cloudContainerIdentifier;
- (NSString *)fp_domainIdentifier;
- (bool)fp_isAddedByCurrentUser;
- (bool)fp_isCloudDocsContainer;
- (bool)fp_isContainer;
- (bool)fp_isContainerPristine;
- (bool)fp_isLastModifiedByCurrentUser;
- (bool)fp_isUbiquitous;
- (NSString *)fp_parentDomainIdentifier;
- (NSString *)fp_spotlightDomainIdentifier;
- (NSString *)fp_spotlightSubDomainIdentifier;
- (NSNumber *)hasUnresolvedConflicts;
- (bool)isCollaborationInvitation;
- (NSNumber *)isDownloadRequested;
- (bool)isExcludedFromSync;
- (bool)isHidden;
- (bool)isSyncRoot;
- (bool)isTopLevelSharedItem;
- (NSData *)originatorInfo;
- (NSString *)preformattedMostRecentEditorName;
- (NSString *)preformattedOwnerName;
- (NSString *)providerIdentifier;
- (NSData *)quarantineBlob;
- (void)setSyncRoot:(bool)arg1;
- (NSString *)sharingPermissions;

@end
