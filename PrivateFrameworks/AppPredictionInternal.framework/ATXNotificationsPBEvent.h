
@interface ATXNotificationsPBEvent : PBCodable <NSCopying> {
    int  _event;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int event : 1; 
        unsigned int pos : 1; 
        unsigned int isOffscreen : 1; 
        unsigned int topOfPile : 1; 
    }  _has;
    bool  _isOffscreen;
    int  _pos;
    unsigned long long  _timestamp;
    bool  _topOfPile;
}

@property (nonatomic) int event;
@property (nonatomic) bool hasEvent;
@property (nonatomic) bool hasIsOffscreen;
@property (nonatomic) bool hasPos;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTopOfPile;
@property (nonatomic) bool isOffscreen;
@property (nonatomic) int pos;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) bool topOfPile;

- (int)StringAsEvent:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)event;
- (id)eventAsString:(int)arg1;
- (bool)hasEvent;
- (bool)hasIsOffscreen;
- (bool)hasPos;
- (bool)hasTimestamp;
- (bool)hasTopOfPile;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isOffscreen;
- (void)mergeFrom:(id)arg1;
- (int)pos;
- (bool)readFrom:(id)arg1;
- (void)setEvent:(int)arg1;
- (void)setHasEvent:(bool)arg1;
- (void)setHasIsOffscreen:(bool)arg1;
- (void)setHasPos:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTopOfPile:(bool)arg1;
- (void)setIsOffscreen:(bool)arg1;
- (void)setPos:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTopOfPile:(bool)arg1;
- (unsigned long long)timestamp;
- (bool)topOfPile;
- (void)writeTo:(id)arg1;

@end
