
@interface AWDWiFiUIJoinEvent : PBCodable <NSCopying> {
    unsigned int  _error;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int error : 1; 
        unsigned int securityType : 1; 
    }  _has;
    NSString * _process;
    NSString * _section;
    NSMutableArray * _sectionCounts;
    unsigned int  _securityType;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int error;
@property (nonatomic) bool hasError;
@property (nonatomic, readonly) bool hasProcess;
@property (nonatomic, readonly) bool hasSection;
@property (nonatomic) bool hasSecurityType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *process;
@property (nonatomic, retain) NSString *section;
@property (nonatomic, retain) NSMutableArray *sectionCounts;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) unsigned long long timestamp;

+ (Class)sectionCountsType;

- (void)addSectionCounts:(id)arg1;
- (void)clearSectionCounts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)error;
- (bool)hasError;
- (bool)hasProcess;
- (bool)hasSection;
- (bool)hasSecurityType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)process;
- (bool)readFrom:(id)arg1;
- (id)section;
- (id)sectionCounts;
- (id)sectionCountsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionCountsCount;
- (unsigned int)securityType;
- (void)setError:(unsigned int)arg1;
- (void)setHasError:(bool)arg1;
- (void)setHasSecurityType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setProcess:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setSectionCounts:(id)arg1;
- (void)setSecurityType:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
