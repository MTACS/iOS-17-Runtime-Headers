
@interface VCMediaNegotiationBlobV2GeneralInfo : PBCodable <NSCopying> {
    unsigned int  _abSwitches;
    NSString * _cname;
    struct { 
        unsigned int ntpTime : 1; 
        unsigned int abSwitches : 1; 
        unsigned int screenRes : 1; 
    }  _has;
    unsigned long long  _ntpTime;
    unsigned int  _screenRes;
}

@property (nonatomic) unsigned int abSwitches;
@property (nonatomic, retain) NSString *cname;
@property (nonatomic, readonly) union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; } creationTime;
@property (nonatomic) bool hasAbSwitches;
@property (nonatomic, readonly) bool hasCname;
@property (nonatomic) bool hasNtpTime;
@property (nonatomic) bool hasScreenRes;
@property (nonatomic) unsigned long long ntpTime;
@property (nonatomic) unsigned int screenRes;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } screenResolution;

- (unsigned int)abSwitches;
- (id)cname;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })creationTime;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbSwitches;
- (bool)hasCname;
- (bool)hasNtpTime;
- (bool)hasScreenRes;
- (unsigned long long)hash;
- (id)initWithCreationTime:(union tagNTP { unsigned long long x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1 screenResolution:(struct CGSize { double x1; double x2; })arg2 abSwitches:(unsigned int)arg3;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)ntpTime;
- (void)printWithLogFile:(void*)arg1 prefix:(id)arg2;
- (bool)readFrom:(id)arg1;
- (unsigned int)screenRes;
- (struct CGSize { double x1; double x2; })screenResolution;
- (void)setAbSwitches:(unsigned int)arg1;
- (void)setCname:(id)arg1;
- (void)setHasAbSwitches:(bool)arg1;
- (void)setHasNtpTime:(bool)arg1;
- (void)setHasScreenRes:(bool)arg1;
- (void)setNtpTime:(unsigned long long)arg1;
- (void)setScreenRes:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
