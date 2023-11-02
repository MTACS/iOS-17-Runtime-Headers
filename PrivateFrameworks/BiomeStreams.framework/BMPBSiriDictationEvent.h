
@interface BMPBSiriDictationEvent : PBCodable <NSCopying> {
    double  _absoluteTimestamp;
    NSString * _correctedText;
    struct { 
        unsigned int absoluteTimestamp : 1; 
    }  _has;
    NSString * _recognizedText;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, retain) NSString *correctedText;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic, readonly) bool hasCorrectedText;
@property (nonatomic, readonly) bool hasRecognizedText;
@property (nonatomic, retain) NSString *recognizedText;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedText;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbsoluteTimestamp;
- (bool)hasCorrectedText;
- (bool)hasRecognizedText;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recognizedText;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setCorrectedText:(id)arg1;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setRecognizedText:(id)arg1;
- (void)writeTo:(id)arg1;

@end
