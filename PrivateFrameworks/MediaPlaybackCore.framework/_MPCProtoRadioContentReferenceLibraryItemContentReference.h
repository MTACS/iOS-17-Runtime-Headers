
@interface _MPCProtoRadioContentReferenceLibraryItemContentReference : PBCodable <NSCopying> {
    NSString * _albumArtistName;
    int  _albumDiscCount;
    NSString * _albumName;
    int  _albumTrackCount;
    NSString * _artistName;
    long long  _cloudID;
    NSString * _composerName;
    int  _contentType;
    NSString * _copyrightText;
    int  _discNumber;
    double  _duration;
    double  _fileSize;
    NSString * _genreName;
    struct { 
        unsigned int cloudID : 1; 
        unsigned int duration : 1; 
        unsigned int fileSize : 1; 
        unsigned int storeAdamID : 1; 
        unsigned int albumDiscCount : 1; 
        unsigned int albumTrackCount : 1; 
        unsigned int contentType : 1; 
        unsigned int discNumber : 1; 
        unsigned int trackNumber : 1; 
        unsigned int year : 1; 
        unsigned int isCompilation : 1; 
    }  _has;
    bool  _isCompilation;
    NSString * _playbackAuthorizationToken;
    long long  _storeAdamID;
    NSString * _title;
    int  _trackNumber;
    int  _year;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
