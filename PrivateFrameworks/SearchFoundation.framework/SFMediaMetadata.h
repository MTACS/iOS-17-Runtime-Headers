
@interface SFMediaMetadata : NSObject <NSCopying, NSSecureCoding, SFMediaMetadata> {
    NSString * _albumName;
    NSString * _artistName;
    NSArray * _bundleIdentifiersToExclude;
    NSString * _disambiguationTitle;
    struct { 
        unsigned int mediaType : 1; 
    }  _has;
    NSString * _mediaName;
    NSArray * _mediaPunchouts;
    int  _mediaType;
}

@property (nonatomic, copy) NSString *albumName;
@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, copy) NSArray *bundleIdentifiersToExclude;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *disambiguationTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *mediaName;
@property (nonatomic, copy) NSArray *mediaPunchouts;
@property (nonatomic) int mediaType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)albumName;
- (id)artistName;
- (id)bundleIdentifiersToExclude;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)disambiguationTitle;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMediaType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)mediaName;
- (id)mediaPunchouts;
- (int)mediaType;
- (void)setAlbumName:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setBundleIdentifiersToExclude:(id)arg1;
- (void)setDisambiguationTitle:(id)arg1;
- (void)setMediaName:(id)arg1;
- (void)setMediaPunchouts:(id)arg1;
- (void)setMediaType:(int)arg1;

@end
