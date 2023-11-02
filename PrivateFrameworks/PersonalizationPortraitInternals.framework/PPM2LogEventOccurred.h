
@interface PPM2LogEventOccurred : PBCodable <NSCopying> {
    int  _event;
    struct { 
        unsigned int event : 1; 
    }  _has;
}

@property (nonatomic) int event;
@property (nonatomic) bool hasEvent;

- (int)StringAsEvent:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)event;
- (id)eventAsString:(int)arg1;
- (bool)hasEvent;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEvent:(int)arg1;
- (void)setHasEvent:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
