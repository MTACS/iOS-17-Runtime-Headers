
@interface WiFiAnalyticsAWDWiFiNWActivityMpduWME : PBCodable <NSCopying> {
    struct { 
        unsigned int tid0 : 1; 
        unsigned int tid1 : 1; 
        unsigned int tid2 : 1; 
        unsigned int tid3 : 1; 
        unsigned int tid4 : 1; 
        unsigned int tid5 : 1; 
        unsigned int tid6 : 1; 
        unsigned int tid7 : 1; 
    }  _has;
    unsigned long long  _tid0;
    unsigned long long  _tid1;
    unsigned long long  _tid2;
    unsigned long long  _tid3;
    unsigned long long  _tid4;
    unsigned long long  _tid5;
    unsigned long long  _tid6;
    unsigned long long  _tid7;
}

@property (nonatomic) bool hasTid0;
@property (nonatomic) bool hasTid1;
@property (nonatomic) bool hasTid2;
@property (nonatomic) bool hasTid3;
@property (nonatomic) bool hasTid4;
@property (nonatomic) bool hasTid5;
@property (nonatomic) bool hasTid6;
@property (nonatomic) bool hasTid7;
@property (nonatomic) unsigned long long tid0;
@property (nonatomic) unsigned long long tid1;
@property (nonatomic) unsigned long long tid2;
@property (nonatomic) unsigned long long tid3;
@property (nonatomic) unsigned long long tid4;
@property (nonatomic) unsigned long long tid5;
@property (nonatomic) unsigned long long tid6;
@property (nonatomic) unsigned long long tid7;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTid0;
- (bool)hasTid1;
- (bool)hasTid2;
- (bool)hasTid3;
- (bool)hasTid4;
- (bool)hasTid5;
- (bool)hasTid6;
- (bool)hasTid7;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTid0:(bool)arg1;
- (void)setHasTid1:(bool)arg1;
- (void)setHasTid2:(bool)arg1;
- (void)setHasTid3:(bool)arg1;
- (void)setHasTid4:(bool)arg1;
- (void)setHasTid5:(bool)arg1;
- (void)setHasTid6:(bool)arg1;
- (void)setHasTid7:(bool)arg1;
- (void)setTid0:(unsigned long long)arg1;
- (void)setTid1:(unsigned long long)arg1;
- (void)setTid2:(unsigned long long)arg1;
- (void)setTid3:(unsigned long long)arg1;
- (void)setTid4:(unsigned long long)arg1;
- (void)setTid5:(unsigned long long)arg1;
- (void)setTid6:(unsigned long long)arg1;
- (void)setTid7:(unsigned long long)arg1;
- (unsigned long long)tid0;
- (unsigned long long)tid1;
- (unsigned long long)tid2;
- (unsigned long long)tid3;
- (unsigned long long)tid4;
- (unsigned long long)tid5;
- (unsigned long long)tid6;
- (unsigned long long)tid7;
- (void)writeTo:(id)arg1;

@end
