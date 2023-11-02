
@interface _SFPBPhotosLibraryImage : PBCodable <NSSecureCoding, _SFPBPhotosLibraryImage> {
    NSString * _applicationBundleIdentifier;
    bool  _isSyndicated;
    NSArray * _peopleInPhotos;
    NSString * _photoIdentifier;
}

@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSyndicated;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *peopleInPhotos;
@property (nonatomic, copy) NSString *photoIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addPeopleInPhoto:(id)arg1;
- (id)applicationBundleIdentifier;
- (void)clearPeopleInPhoto;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSyndicated;
- (id)jsonData;
- (id)peopleInPhotoAtIndex:(unsigned long long)arg1;
- (unsigned long long)peopleInPhotoCount;
- (id)peopleInPhotos;
- (id)photoIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setIsSyndicated:(bool)arg1;
- (void)setPeopleInPhoto:(id)arg1;
- (void)setPeopleInPhotos:(id)arg1;
- (void)setPhotoIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
