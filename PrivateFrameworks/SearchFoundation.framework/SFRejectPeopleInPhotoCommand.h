
@interface SFRejectPeopleInPhotoCommand : SFCommand <NSCopying, NSSecureCoding, SFRejectPeopleInPhotoCommand> {
    SFPhotosLibraryImage * _photosLibraryImage;
    NSArray * _rejectedPeople;
}

@property (nonatomic, copy) NSData *backendData;
@property (nonatomic, copy) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFTopic *normalizedTopic;
@property (nonatomic, retain) SFPhotosLibraryImage *photosLibraryImage;
@property (nonatomic, copy) NSArray *rejectedPeople;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)photosLibraryImage;
- (id)rejectedPeople;
- (void)setPhotosLibraryImage:(id)arg1;
- (void)setRejectedPeople:(id)arg1;

@end
