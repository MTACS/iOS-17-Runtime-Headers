
@interface _INPBStartPhotoPlaybackIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBStartPhotoPlaybackIntentResponse> {
    NSString * _albumName;
    struct { 
        unsigned int searchResultsCount : 1; 
    }  _has;
    _INPBLocation * _locationCreated;
    int  _searchResultsCount;
}

@property (nonatomic, copy) NSString *albumName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAlbumName;
@property (nonatomic, readonly) bool hasLocationCreated;
@property (nonatomic) bool hasSearchResultsCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBLocation *locationCreated;
@property (nonatomic) int searchResultsCount;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)albumName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAlbumName;
- (bool)hasLocationCreated;
- (bool)hasSearchResultsCount;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)locationCreated;
- (bool)readFrom:(id)arg1;
- (int)searchResultsCount;
- (void)setAlbumName:(id)arg1;
- (void)setHasSearchResultsCount:(bool)arg1;
- (void)setLocationCreated:(id)arg1;
- (void)setSearchResultsCount:(int)arg1;
- (void)writeTo:(id)arg1;

@end
