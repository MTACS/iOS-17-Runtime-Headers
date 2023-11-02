
@interface SFMessageAttachment : NSObject <NSCopying, NSSecureCoding, SFMessageAttachment> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    NSData * _linkMetadata;
    SFPhotosLibraryImage * _photosLibraryImage;
    int  _type;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSData *linkMetadata;
@property (nonatomic, retain) SFPhotosLibraryImage *photosLibraryImage;
@property (readonly) Class superclass;
@property (nonatomic) int type;
@property (nonatomic, copy) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)linkMetadata;
- (id)photosLibraryImage;
- (void)setLinkMetadata:(id)arg1;
- (void)setPhotosLibraryImage:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUrl:(id)arg1;
- (int)type;
- (id)url;

@end
