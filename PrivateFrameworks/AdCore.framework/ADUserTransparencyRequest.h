
@interface ADUserTransparencyRequest : PBRequest <NSCopying> {
    NSData * _contentiAdID;
    NSData * _dPID;
    struct { 
        unsigned int isSignedInToiTunes : 1; 
        unsigned int limitAdTracking : 1; 
    }  _has;
    NSData * _iAdID;
    NSString * _iTunesStore;
    bool  _isSignedInToiTunes;
    bool  _limitAdTracking;
    NSString * _localeIdentifier;
}

@property (nonatomic, retain) NSData *contentiAdID;
@property (nonatomic, retain) NSData *dPID;
@property (nonatomic, readonly) bool hasContentiAdID;
@property (nonatomic, readonly) bool hasDPID;
@property (nonatomic, readonly) bool hasIAdID;
@property (nonatomic, readonly) bool hasITunesStore;
@property (nonatomic) bool hasIsSignedInToiTunes;
@property (nonatomic) bool hasLimitAdTracking;
@property (nonatomic, readonly) bool hasLocaleIdentifier;
@property (nonatomic, retain) NSData *iAdID;
@property (nonatomic, retain) NSString *iTunesStore;
@property (nonatomic) bool isSignedInToiTunes;
@property (nonatomic) bool limitAdTracking;
@property (nonatomic, retain) NSString *localeIdentifier;

+ (id)options;

- (void).cxx_destruct;
- (id)contentiAdID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dPID;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContentiAdID;
- (bool)hasDPID;
- (bool)hasIAdID;
- (bool)hasITunesStore;
- (bool)hasIsSignedInToiTunes;
- (bool)hasLimitAdTracking;
- (bool)hasLocaleIdentifier;
- (unsigned long long)hash;
- (id)iAdID;
- (id)iTunesStore;
- (bool)isEqual:(id)arg1;
- (bool)isSignedInToiTunes;
- (bool)limitAdTracking;
- (id)localeIdentifier;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContentiAdID:(id)arg1;
- (void)setDPID:(id)arg1;
- (void)setHasIsSignedInToiTunes:(bool)arg1;
- (void)setHasLimitAdTracking:(bool)arg1;
- (void)setIAdID:(id)arg1;
- (void)setITunesStore:(id)arg1;
- (void)setIsSignedInToiTunes:(bool)arg1;
- (void)setLimitAdTracking:(bool)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
