
@interface GEOMapQuery : PBCodable <NSCopying> {
    int  _clientImgFmt;
    int  _clientImgMaxHeight;
    int  _clientImgMaxWidth;
    struct { 
        unsigned int has_sessionID : 1; 
        unsigned int has_clientImgFmt : 1; 
        unsigned int has_clientImgMaxHeight : 1; 
        unsigned int has_clientImgMaxWidth : 1; 
        unsigned int has_mapCenterX : 1; 
        unsigned int has_mapCenterY : 1; 
        unsigned int has_mapSpanX : 1; 
        unsigned int has_mapSpanY : 1; 
        unsigned int has_requestType : 1; 
        unsigned int has_tilesizeX : 1; 
        unsigned int has_tilesizeY : 1; 
        unsigned int has_zoomlevel : 1; 
        unsigned int read_mapRegion : 1; 
        unsigned int read_placeSearchRequest : 1; 
        unsigned int read_query : 1; 
        unsigned int read_userLocation : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _mapCenterX;
    int  _mapCenterY;
    GEOMapRegion * _mapRegion;
    int  _mapSpanX;
    int  _mapSpanY;
    GEOPlaceSearchRequest * _placeSearchRequest;
    NSString * _query;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _requestType;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionID;
    int  _tilesizeX;
    int  _tilesizeY;
    GEOLocation * _userLocation;
    int  _zoomlevel;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
