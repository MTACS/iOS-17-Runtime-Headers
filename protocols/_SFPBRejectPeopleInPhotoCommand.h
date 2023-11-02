
@protocol _SFPBRejectPeopleInPhotoCommand <NSObject>

@required

- (void)addRejectedPeople:(_SFPBPerson *)arg1;
- (void)clearRejectedPeople;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_SFPBPhotosLibraryImage *)photosLibraryImage;
- (_SFPBPerson *)rejectedPeopleAtIndex:(unsigned long long)arg1;
- (unsigned long long)rejectedPeopleCount;
- (NSArray *)rejectedPeoples;
- (void)setPhotosLibraryImage:(_SFPBPhotosLibraryImage *)arg1;
- (void)setRejectedPeoples:(NSArray *)arg1;

@end
