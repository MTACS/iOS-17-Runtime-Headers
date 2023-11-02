
@interface AWDHomeKitCameraUserSettings : PBCodable <NSCopying> {
    struct { 
        unsigned int isImportingFromPhotoLibraryEnabled : 1; 
        unsigned int isOwner : 1; 
        unsigned int isSharingFaceClassificationsEnabled : 1; 
    }  _has;
    bool  _isImportingFromPhotoLibraryEnabled;
    bool  _isOwner;
    bool  _isSharingFaceClassificationsEnabled;
}

@property (nonatomic) bool hasIsImportingFromPhotoLibraryEnabled;
@property (nonatomic) bool hasIsOwner;
@property (nonatomic) bool hasIsSharingFaceClassificationsEnabled;
@property (nonatomic) bool isImportingFromPhotoLibraryEnabled;
@property (nonatomic) bool isOwner;
@property (nonatomic) bool isSharingFaceClassificationsEnabled;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsImportingFromPhotoLibraryEnabled;
- (bool)hasIsOwner;
- (bool)hasIsSharingFaceClassificationsEnabled;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isImportingFromPhotoLibraryEnabled;
- (bool)isOwner;
- (bool)isSharingFaceClassificationsEnabled;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsImportingFromPhotoLibraryEnabled:(bool)arg1;
- (void)setHasIsOwner:(bool)arg1;
- (void)setHasIsSharingFaceClassificationsEnabled:(bool)arg1;
- (void)setIsImportingFromPhotoLibraryEnabled:(bool)arg1;
- (void)setIsOwner:(bool)arg1;
- (void)setIsSharingFaceClassificationsEnabled:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
