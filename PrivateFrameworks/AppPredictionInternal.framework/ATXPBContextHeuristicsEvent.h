
@interface ATXPBContextHeuristicsEvent : PBCodable <NSCopying> {
    NSString * _contextName;
    NSString * _contextType;
    struct { 
        unsigned int isStart : 1; 
    }  _has;
    bool  _isStart;
}

@property (nonatomic, retain) NSString *contextName;
@property (nonatomic, retain) NSString *contextType;
@property (nonatomic, readonly) bool hasContextName;
@property (nonatomic, readonly) bool hasContextType;
@property (nonatomic) bool hasIsStart;
@property (nonatomic) bool isStart;

- (void).cxx_destruct;
- (id)contextName;
- (id)contextType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContextName;
- (bool)hasContextType;
- (bool)hasIsStart;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isStart;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContextName:(id)arg1;
- (void)setContextType:(id)arg1;
- (void)setHasIsStart:(bool)arg1;
- (void)setIsStart:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
