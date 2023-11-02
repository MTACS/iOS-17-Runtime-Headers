
@interface PPPBMusicDataCollectionRecord : PBCodable <NSCopying> {
    int  _algorithm;
    struct { 
        unsigned int quantizedScore : 1; 
        unsigned int secondsFromUnixEpoch : 1; 
        unsigned int algorithm : 1; 
        unsigned int mediaType : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _label;
    NSString * _mediaId;
    int  _mediaType;
    double  _quantizedScore;
    double  _secondsFromUnixEpoch;
    NSString * _sourceBundleId;
    int  _type;
}

@property (nonatomic) int algorithm;
@property (nonatomic) bool hasAlgorithm;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic, readonly) bool hasMediaId;
@property (nonatomic) bool hasMediaType;
@property (nonatomic) bool hasQuantizedScore;
@property (nonatomic) bool hasSecondsFromUnixEpoch;
@property (nonatomic, readonly) bool hasSourceBundleId;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *mediaId;
@property (nonatomic) int mediaType;
@property (nonatomic) double quantizedScore;
@property (nonatomic) double secondsFromUnixEpoch;
@property (nonatomic, retain) NSString *sourceBundleId;
@property (nonatomic) int type;

+ (id)options;

- (void).cxx_destruct;
- (int)algorithm;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAlgorithm;
- (bool)hasLabel;
- (bool)hasMediaId;
- (bool)hasMediaType;
- (bool)hasQuantizedScore;
- (bool)hasSecondsFromUnixEpoch;
- (bool)hasSourceBundleId;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)mediaId;
- (int)mediaType;
- (void)mergeFrom:(id)arg1;
- (double)quantizedScore;
- (bool)readFrom:(id)arg1;
- (double)secondsFromUnixEpoch;
- (void)setAlgorithm:(int)arg1;
- (void)setHasAlgorithm:(bool)arg1;
- (void)setHasMediaType:(bool)arg1;
- (void)setHasQuantizedScore:(bool)arg1;
- (void)setHasSecondsFromUnixEpoch:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setMediaId:(id)arg1;
- (void)setMediaType:(int)arg1;
- (void)setQuantizedScore:(double)arg1;
- (void)setSecondsFromUnixEpoch:(double)arg1;
- (void)setSourceBundleId:(id)arg1;
- (void)setType:(int)arg1;
- (id)sourceBundleId;
- (int)type;
- (void)writeTo:(id)arg1;

@end
