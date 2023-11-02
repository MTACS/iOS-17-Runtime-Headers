
@interface _SFPBShowPhotosOneUpViewCommand : PBCodable <NSSecureCoding, _SFPBShowPhotosOneUpViewCommand> {
    NSArray * _matchedPeoples;
    _SFPBPerson * _matchedPerson;
    NSArray * _matchedScenes;
    _SFPBPunchout * _photoFilePunchout;
    _SFPBPhotosLibraryImage * _photosLibraryImage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *matchedPeoples;
@property (nonatomic, retain) _SFPBPerson *matchedPerson;
@property (nonatomic, copy) NSArray *matchedScenes;
@property (nonatomic, retain) _SFPBPunchout *photoFilePunchout;
@property (nonatomic, retain) _SFPBPhotosLibraryImage *photosLibraryImage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addMatchedPeople:(id)arg1;
- (void)addMatchedScenes:(id)arg1;
- (void)clearMatchedPeople;
- (void)clearMatchedScenes;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)matchedPeopleAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchedPeopleCount;
- (id)matchedPeoples;
- (id)matchedPerson;
- (id)matchedScenes;
- (id)matchedScenesAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchedScenesCount;
- (id)photoFilePunchout;
- (id)photosLibraryImage;
- (bool)readFrom:(id)arg1;
- (void)setMatchedPeople:(id)arg1;
- (void)setMatchedPeoples:(id)arg1;
- (void)setMatchedPerson:(id)arg1;
- (void)setMatchedScenes:(id)arg1;
- (void)setPhotoFilePunchout:(id)arg1;
- (void)setPhotosLibraryImage:(id)arg1;
- (void)writeTo:(id)arg1;

@end
