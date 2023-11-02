
@interface _SFPBRejectPeopleInPhotoCommand : PBCodable <NSSecureCoding, _SFPBRejectPeopleInPhotoCommand> {
    _SFPBPhotosLibraryImage * _photosLibraryImage;
    NSArray * _rejectedPeoples;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBPhotosLibraryImage *photosLibraryImage;
@property (nonatomic, copy) NSArray *rejectedPeoples;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addRejectedPeople:(id)arg1;
- (void)clearRejectedPeople;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)photosLibraryImage;
- (bool)readFrom:(id)arg1;
- (id)rejectedPeopleAtIndex:(unsigned long long)arg1;
- (unsigned long long)rejectedPeopleCount;
- (id)rejectedPeoples;
- (void)setPhotosLibraryImage:(id)arg1;
- (void)setRejectedPeople:(id)arg1;
- (void)setRejectedPeoples:(id)arg1;
- (void)writeTo:(id)arg1;

@end
