
@interface _MRRemoteTextInputMessageProtobuf : PBCodable <NSCopying> {
    NSData * _data;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int version : 1; 
    }  _has;
    double  _timestamp;
    unsigned long long  _version;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, readonly) bool hasData;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasVersion;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasData;
- (bool)hasTimestamp;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setData:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (double)timestamp;
- (unsigned long long)version;
- (void)writeTo:(id)arg1;

@end
