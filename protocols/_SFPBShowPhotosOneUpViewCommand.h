
@protocol _SFPBShowPhotosOneUpViewCommand <NSObject>

@required

- (void)addMatchedPeople:(_SFPBPerson *)arg1;
- (void)addMatchedScenes:(_SFPBScene *)arg1;
- (void)clearMatchedPeople;
- (void)clearMatchedScenes;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBPerson *)matchedPeopleAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchedPeopleCount;
- (NSArray *)matchedPeoples;
- (_SFPBPerson *)matchedPerson;
- (NSArray *)matchedScenes;
- (_SFPBScene *)matchedScenesAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchedScenesCount;
- (_SFPBPunchout *)photoFilePunchout;
- (_SFPBPhotosLibraryImage *)photosLibraryImage;
- (void)setMatchedPeoples:(NSArray *)arg1;
- (void)setMatchedPerson:(_SFPBPerson *)arg1;
- (void)setMatchedScenes:(NSArray *)arg1;
- (void)setPhotoFilePunchout:(_SFPBPunchout *)arg1;
- (void)setPhotosLibraryImage:(_SFPBPhotosLibraryImage *)arg1;

@end
