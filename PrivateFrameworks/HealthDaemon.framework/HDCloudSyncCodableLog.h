
@interface HDCloudSyncCodableLog : PBCodable <NSCopying> {
    NSString * _event;
    struct { 
        unsigned int timeStamp : 1; 
    }  _has;
    double  _timeStamp;
}

@property (nonatomic, retain) NSString *event;
@property (nonatomic, readonly) bool hasEvent;
@property (nonatomic) bool hasTimeStamp;
@property (nonatomic) double timeStamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)event;
- (bool)hasEvent;
- (bool)hasTimeStamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setHasTimeStamp:(bool)arg1;
- (void)setTimeStamp:(double)arg1;
- (double)timeStamp;
- (void)writeTo:(id)arg1;

@end
