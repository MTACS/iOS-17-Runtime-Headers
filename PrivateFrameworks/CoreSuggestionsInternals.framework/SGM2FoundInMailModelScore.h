
@interface SGM2FoundInMailModelScore : PBCodable <NSCopying> {
    int  _contactDetail;
    bool  _correct;
    struct { 
        unsigned int contactDetail : 1; 
        unsigned int mode : 1; 
        unsigned int model : 1; 
        unsigned int supervision : 1; 
        unsigned int correct : 1; 
        unsigned int result : 1; 
    }  _has;
    NSString * _key;
    int  _mode;
    int  _model;
    bool  _result;
    int  _supervision;
}

@property (nonatomic) int contactDetail;
@property (nonatomic) bool correct;
@property (nonatomic) bool hasContactDetail;
@property (nonatomic) bool hasCorrect;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasMode;
@property (nonatomic) bool hasModel;
@property (nonatomic) bool hasResult;
@property (nonatomic) bool hasSupervision;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) int mode;
@property (nonatomic) int model;
@property (nonatomic) bool result;
@property (nonatomic) int supervision;

- (void).cxx_destruct;
- (int)StringAsContactDetail:(id)arg1;
- (int)StringAsMode:(id)arg1;
- (int)StringAsModel:(id)arg1;
- (int)StringAsSupervision:(id)arg1;
- (int)contactDetail;
- (id)contactDetailAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)correct;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContactDetail;
- (bool)hasCorrect;
- (bool)hasKey;
- (bool)hasMode;
- (bool)hasModel;
- (bool)hasResult;
- (bool)hasSupervision;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (int)mode;
- (id)modeAsString:(int)arg1;
- (int)model;
- (id)modelAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (bool)result;
- (void)setContactDetail:(int)arg1;
- (void)setCorrect:(bool)arg1;
- (void)setHasContactDetail:(bool)arg1;
- (void)setHasCorrect:(bool)arg1;
- (void)setHasMode:(bool)arg1;
- (void)setHasModel:(bool)arg1;
- (void)setHasResult:(bool)arg1;
- (void)setHasSupervision:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setModel:(int)arg1;
- (void)setResult:(bool)arg1;
- (void)setSupervision:(int)arg1;
- (int)supervision;
- (id)supervisionAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
