
@interface VisionSignalGradingVisionGrade : PBCodable <NSCopying> {
    bool  _cameraRollGrade;
    int  _childAge;
    bool  _childGrade;
    bool  _extractedGrade;
    NSMutableArray * _extractedSignals;
    struct { 
        unsigned int childAge : 1; 
        unsigned int numPeople : 1; 
        unsigned int cameraRollGrade : 1; 
        unsigned int childGrade : 1; 
        unsigned int extractedGrade : 1; 
        unsigned int imageGrade : 1; 
    }  _has;
    NSString * _identifier;
    bool  _imageGrade;
    int  _numPeople;
}

@property (nonatomic) bool cameraRollGrade;
@property (nonatomic) int childAge;
@property (nonatomic) bool childGrade;
@property (nonatomic) bool extractedGrade;
@property (nonatomic, retain) NSMutableArray *extractedSignals;
@property (nonatomic) bool hasCameraRollGrade;
@property (nonatomic) bool hasChildAge;
@property (nonatomic) bool hasChildGrade;
@property (nonatomic) bool hasExtractedGrade;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasImageGrade;
@property (nonatomic) bool hasNumPeople;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool imageGrade;
@property (nonatomic) int numPeople;

+ (Class)extractedSignalsType;

- (void).cxx_destruct;
- (void)addExtractedSignals:(id)arg1;
- (bool)cameraRollGrade;
- (int)childAge;
- (bool)childGrade;
- (void)clearExtractedSignals;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)extractedGrade;
- (id)extractedSignals;
- (id)extractedSignalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)extractedSignalsCount;
- (bool)hasCameraRollGrade;
- (bool)hasChildAge;
- (bool)hasChildGrade;
- (bool)hasExtractedGrade;
- (bool)hasIdentifier;
- (bool)hasImageGrade;
- (bool)hasNumPeople;
- (unsigned long long)hash;
- (id)identifier;
- (bool)imageGrade;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)numPeople;
- (bool)readFrom:(id)arg1;
- (void)setCameraRollGrade:(bool)arg1;
- (void)setChildAge:(int)arg1;
- (void)setChildGrade:(bool)arg1;
- (void)setExtractedGrade:(bool)arg1;
- (void)setExtractedSignals:(id)arg1;
- (void)setHasCameraRollGrade:(bool)arg1;
- (void)setHasChildAge:(bool)arg1;
- (void)setHasChildGrade:(bool)arg1;
- (void)setHasExtractedGrade:(bool)arg1;
- (void)setHasImageGrade:(bool)arg1;
- (void)setHasNumPeople:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImageGrade:(bool)arg1;
- (void)setNumPeople:(int)arg1;
- (void)writeTo:(id)arg1;

@end
