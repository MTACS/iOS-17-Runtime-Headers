
@interface PSGPBTypingSpeed : PBCodable <NSCopying> {
    struct { 
        unsigned int messageDurationMilliseconds : 1; 
        unsigned int messageLength : 1; 
        unsigned int messageWords : 1; 
    }  _has;
    NSString * _localeIdentifier;
    int  _messageDurationMilliseconds;
    int  _messageLength;
    int  _messageWords;
    NSString * _wbExperimentId;
    NSString * _wbTreatmentId;
    NSString * _wbTreatmentName;
    NSString * _zkwExperimentId;
    NSString * _zkwTreatmentId;
    NSString * _zkwTreatmentName;
}

@property (nonatomic, readonly) bool hasLocaleIdentifier;
@property (nonatomic) bool hasMessageDurationMilliseconds;
@property (nonatomic) bool hasMessageLength;
@property (nonatomic) bool hasMessageWords;
@property (nonatomic, readonly) bool hasWbExperimentId;
@property (nonatomic, readonly) bool hasWbTreatmentId;
@property (nonatomic, readonly) bool hasWbTreatmentName;
@property (nonatomic, readonly) bool hasZkwExperimentId;
@property (nonatomic, readonly) bool hasZkwTreatmentId;
@property (nonatomic, readonly) bool hasZkwTreatmentName;
@property (nonatomic, retain) NSString *localeIdentifier;
@property (nonatomic) int messageDurationMilliseconds;
@property (nonatomic) int messageLength;
@property (nonatomic) int messageWords;
@property (nonatomic, retain) NSString *wbExperimentId;
@property (nonatomic, retain) NSString *wbTreatmentId;
@property (nonatomic, retain) NSString *wbTreatmentName;
@property (nonatomic, retain) NSString *zkwExperimentId;
@property (nonatomic, retain) NSString *zkwTreatmentId;
@property (nonatomic, retain) NSString *zkwTreatmentName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocaleIdentifier;
- (bool)hasMessageDurationMilliseconds;
- (bool)hasMessageLength;
- (bool)hasMessageWords;
- (bool)hasWbExperimentId;
- (bool)hasWbTreatmentId;
- (bool)hasWbTreatmentName;
- (bool)hasZkwExperimentId;
- (bool)hasZkwTreatmentId;
- (bool)hasZkwTreatmentName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localeIdentifier;
- (void)mergeFrom:(id)arg1;
- (int)messageDurationMilliseconds;
- (int)messageLength;
- (int)messageWords;
- (bool)readFrom:(id)arg1;
- (void)setHasMessageDurationMilliseconds:(bool)arg1;
- (void)setHasMessageLength:(bool)arg1;
- (void)setHasMessageWords:(bool)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setMessageDurationMilliseconds:(int)arg1;
- (void)setMessageLength:(int)arg1;
- (void)setMessageWords:(int)arg1;
- (void)setWbExperimentId:(id)arg1;
- (void)setWbTreatmentId:(id)arg1;
- (void)setWbTreatmentName:(id)arg1;
- (void)setZkwExperimentId:(id)arg1;
- (void)setZkwTreatmentId:(id)arg1;
- (void)setZkwTreatmentName:(id)arg1;
- (id)wbExperimentId;
- (id)wbTreatmentId;
- (id)wbTreatmentName;
- (void)writeTo:(id)arg1;
- (id)zkwExperimentId;
- (id)zkwTreatmentId;
- (id)zkwTreatmentName;

@end
