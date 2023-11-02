
@interface _SFPBMessageAttachment : PBCodable <NSSecureCoding, _SFPBMessageAttachment> {
    NSData * _linkMetadata;
    _SFPBPhotosLibraryImage * _photosLibraryImage;
    int  _type;
    _SFPBURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSData *linkMetadata;
@property (nonatomic, retain) _SFPBPhotosLibraryImage *photosLibraryImage;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, retain) _SFPBURL *url;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkMetadata;
- (id)photosLibraryImage;
- (bool)readFrom:(id)arg1;
- (void)setLinkMetadata:(id)arg1;
- (void)setPhotosLibraryImage:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUrl:(id)arg1;
- (int)type;
- (id)url;
- (void)writeTo:(id)arg1;

@end
