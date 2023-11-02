
@interface AWDWiFiUIScanCount : PBCodable <NSCopying> {
    struct { 
        unsigned int max : 1; 
    }  _has;
    unsigned int  _max;
    NSString * _section;
}

@property (nonatomic) bool hasMax;
@property (nonatomic, readonly) bool hasSection;
@property (nonatomic) unsigned int max;
@property (nonatomic, retain) NSString *section;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMax;
- (bool)hasSection;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)max;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)section;
- (void)setHasMax:(bool)arg1;
- (void)setMax:(unsigned int)arg1;
- (void)setSection:(id)arg1;
- (void)writeTo:(id)arg1;

@end
