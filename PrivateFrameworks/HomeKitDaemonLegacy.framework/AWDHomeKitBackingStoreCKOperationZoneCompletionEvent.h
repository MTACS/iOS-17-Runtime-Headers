
@interface AWDHomeKitBackingStoreCKOperationZoneCompletionEvent : PBCodable <NSCopying> {
    int  _containerType;
    bool  _didSucceed;
    long long  _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int timestamp : 1; 
        unsigned int containerType : 1; 
        unsigned int zoneType : 1; 
        unsigned int didSucceed : 1; 
    }  _has;
    unsigned long long  _timestamp;
    int  _zoneType;
}

@property (nonatomic) int containerType;
@property (nonatomic) bool didSucceed;
@property (nonatomic) long long errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) bool hasContainerType;
@property (nonatomic) bool hasDidSucceed;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasZoneType;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int zoneType;

- (void).cxx_destruct;
- (int)StringAsContainerType:(id)arg1;
- (int)StringAsZoneType:(id)arg1;
- (int)containerType;
- (id)containerTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didSucceed;
- (long long)errorCode;
- (id)errorDomain;
- (bool)hasContainerType;
- (bool)hasDidSucceed;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasTimestamp;
- (bool)hasZoneType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContainerType:(int)arg1;
- (void)setDidSucceed:(bool)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasContainerType:(bool)arg1;
- (void)setHasDidSucceed:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasZoneType:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setZoneType:(int)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;
- (int)zoneType;
- (id)zoneTypeAsString:(int)arg1;

@end
