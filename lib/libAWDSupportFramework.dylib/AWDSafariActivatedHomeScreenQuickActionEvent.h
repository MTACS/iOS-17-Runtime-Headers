
@interface AWDSafariActivatedHomeScreenQuickActionEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int quickAction : 1; 
    }  _has;
    int  _quickAction;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasQuickAction;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int quickAction;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsQuickAction:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasQuickAction;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)quickAction;
- (id)quickActionAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasQuickAction:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setQuickAction:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
