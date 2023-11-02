
@interface EKPersistentAttachment : EKPersistentObject

+ (Class)meltedClass;
+ (id)propertiesToUnloadOnCommit;
+ (id)propertyKeyForUniqueIdentifier;
+ (id)relations;

- (id)URLString;
- (id)UUID;
- (id)XPropertiesData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)entityType;
- (id)externalID;
- (id)externalModificationTag;
- (id)fileFormat;
- (id)fileNameRaw;
- (id)fileSize;
- (int)flags;
- (id)localRelativePath;
- (id)securityScopedLocalURLForArchivedDataWrapper;
- (id)securityScopedLocalURLWrapper;
- (id)securityScopedURLWrapperForPendingFileCopy;
- (void)setExternalID:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setFileFormat:(id)arg1;
- (void)setFileNameRaw:(id)arg1;
- (void)setFileSize:(id)arg1;
- (void)setFlags:(int)arg1;
- (void)setLocalRelativePath:(id)arg1;
- (void)setSecurityScopedLocalURLForArchivedDataWrapper:(id)arg1;
- (void)setSecurityScopedLocalURLWrapper:(id)arg1;
- (void)setSecurityScopedURLWrapperForPendingFileCopy:(id)arg1;
- (void)setShouldSetQuarantineAttributesOnCopiedFile:(bool)arg1;
- (void)setURLString:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setXPropertiesData:(id)arg1;
- (bool)shouldSetQuarantineAttributesOnCopiedFile;

@end
