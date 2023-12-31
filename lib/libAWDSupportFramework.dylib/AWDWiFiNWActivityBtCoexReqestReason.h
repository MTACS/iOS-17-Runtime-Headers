
@interface AWDWiFiNWActivityBtCoexReqestReason : PBCodable <NSCopying> {
    unsigned int  _a2dp;
    unsigned int  _acl;
    unsigned int  _ble;
    unsigned int  _blescan;
    unsigned int  _esco;
    struct { 
        unsigned int a2dp : 1; 
        unsigned int acl : 1; 
        unsigned int ble : 1; 
        unsigned int blescan : 1; 
        unsigned int esco : 1; 
        unsigned int inquiry : 1; 
        unsigned int inquiryscan : 1; 
        unsigned int mss : 1; 
        unsigned int other : 1; 
        unsigned int page : 1; 
        unsigned int pagescan : 1; 
        unsigned int park : 1; 
        unsigned int sco : 1; 
        unsigned int sniff : 1; 
    }  _has;
    unsigned int  _inquiry;
    unsigned int  _inquiryscan;
    unsigned int  _mss;
    unsigned int  _other;
    unsigned int  _page;
    unsigned int  _pagescan;
    unsigned int  _park;
    unsigned int  _sco;
    unsigned int  _sniff;
}

@property (nonatomic) unsigned int a2dp;
@property (nonatomic) unsigned int acl;
@property (nonatomic) unsigned int ble;
@property (nonatomic) unsigned int blescan;
@property (nonatomic) unsigned int esco;
@property (nonatomic) bool hasA2dp;
@property (nonatomic) bool hasAcl;
@property (nonatomic) bool hasBle;
@property (nonatomic) bool hasBlescan;
@property (nonatomic) bool hasEsco;
@property (nonatomic) bool hasInquiry;
@property (nonatomic) bool hasInquiryscan;
@property (nonatomic) bool hasMss;
@property (nonatomic) bool hasOther;
@property (nonatomic) bool hasPage;
@property (nonatomic) bool hasPagescan;
@property (nonatomic) bool hasPark;
@property (nonatomic) bool hasSco;
@property (nonatomic) bool hasSniff;
@property (nonatomic) unsigned int inquiry;
@property (nonatomic) unsigned int inquiryscan;
@property (nonatomic) unsigned int mss;
@property (nonatomic) unsigned int other;
@property (nonatomic) unsigned int page;
@property (nonatomic) unsigned int pagescan;
@property (nonatomic) unsigned int park;
@property (nonatomic) unsigned int sco;
@property (nonatomic) unsigned int sniff;

- (unsigned int)a2dp;
- (unsigned int)acl;
- (unsigned int)ble;
- (unsigned int)blescan;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)esco;
- (bool)hasA2dp;
- (bool)hasAcl;
- (bool)hasBle;
- (bool)hasBlescan;
- (bool)hasEsco;
- (bool)hasInquiry;
- (bool)hasInquiryscan;
- (bool)hasMss;
- (bool)hasOther;
- (bool)hasPage;
- (bool)hasPagescan;
- (bool)hasPark;
- (bool)hasSco;
- (bool)hasSniff;
- (unsigned long long)hash;
- (unsigned int)inquiry;
- (unsigned int)inquiryscan;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)mss;
- (unsigned int)other;
- (unsigned int)page;
- (unsigned int)pagescan;
- (unsigned int)park;
- (bool)readFrom:(id)arg1;
- (unsigned int)sco;
- (void)setA2dp:(unsigned int)arg1;
- (void)setAcl:(unsigned int)arg1;
- (void)setBle:(unsigned int)arg1;
- (void)setBlescan:(unsigned int)arg1;
- (void)setEsco:(unsigned int)arg1;
- (void)setHasA2dp:(bool)arg1;
- (void)setHasAcl:(bool)arg1;
- (void)setHasBle:(bool)arg1;
- (void)setHasBlescan:(bool)arg1;
- (void)setHasEsco:(bool)arg1;
- (void)setHasInquiry:(bool)arg1;
- (void)setHasInquiryscan:(bool)arg1;
- (void)setHasMss:(bool)arg1;
- (void)setHasOther:(bool)arg1;
- (void)setHasPage:(bool)arg1;
- (void)setHasPagescan:(bool)arg1;
- (void)setHasPark:(bool)arg1;
- (void)setHasSco:(bool)arg1;
- (void)setHasSniff:(bool)arg1;
- (void)setInquiry:(unsigned int)arg1;
- (void)setInquiryscan:(unsigned int)arg1;
- (void)setMss:(unsigned int)arg1;
- (void)setOther:(unsigned int)arg1;
- (void)setPage:(unsigned int)arg1;
- (void)setPagescan:(unsigned int)arg1;
- (void)setPark:(unsigned int)arg1;
- (void)setSco:(unsigned int)arg1;
- (void)setSniff:(unsigned int)arg1;
- (unsigned int)sniff;
- (void)writeTo:(id)arg1;

@end
