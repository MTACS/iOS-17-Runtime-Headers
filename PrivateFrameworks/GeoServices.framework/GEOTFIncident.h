
@interface GEOTFIncident : PBCodable <NSCopying> {
    unsigned int  _alertCCode;
    bool  _blocked;
    int  _color;
    NSString * _crossStreet;
    float  _delay;
    unsigned long long  _durationMin;
    double  _endOffset;
    bool  _endTimeReliable;
    struct { 
        unsigned int has_durationMin : 1; 
        unsigned int has_endOffset : 1; 
        unsigned int has_latitude : 1; 
        unsigned int has_longitude : 1; 
        unsigned int has_startOffset : 1; 
        unsigned int has_startTime : 1; 
        unsigned int has_updateTime : 1; 
        unsigned int has_alertCCode : 1; 
        unsigned int has_color : 1; 
        unsigned int has_delay : 1; 
        unsigned int has_laneClosureCount : 1; 
        unsigned int has_laneClosureType : 1; 
        unsigned int has_maxZoomLevel : 1; 
        unsigned int has_minZoomLevel : 1; 
        unsigned int has_significance : 1; 
        unsigned int has_speed : 1; 
        unsigned int has_trafficTrend : 1; 
        unsigned int has_type : 1; 
        unsigned int has_blocked : 1; 
        unsigned int has_endTimeReliable : 1; 
        unsigned int has_hardBlocked : 1; 
        unsigned int has_hidden : 1; 
        unsigned int has_navigationAlert : 1; 
        unsigned int read_geoids : 1; 
        unsigned int read_crossStreet : 1; 
        unsigned int read_incidentId : 1; 
        unsigned int read_infos : 1; 
        unsigned int read_openlr : 1; 
        unsigned int read_street : 1; 
        unsigned int read_zilch : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _geoids;
    bool  _hardBlocked;
    bool  _hidden;
    NSString * _incidentId;
    NSMutableArray * _infos;
    unsigned int  _laneClosureCount;
    int  _laneClosureType;
    double  _latitude;
    double  _longitude;
    unsigned int  _maxZoomLevel;
    unsigned int  _minZoomLevel;
    bool  _navigationAlert;
    NSData * _openlr;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _significance;
    float  _speed;
    double  _startOffset;
    long long  _startTime;
    NSString * _street;
    int  _trafficTrend;
    int  _type;
    long long  _updateTime;
    NSData * _zilch;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
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
