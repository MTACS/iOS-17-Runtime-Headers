
@interface HKCodableSummaryVisionPrescriptionValue : PBCodable <NSCopying> {
    struct APPLE_HKCodableSummaryVisionPrescriptionValue_1 { 
        unsigned int timestampData : 1; 
        unsigned int hasImage : 1; 
    }  _has;
    bool  _hasImage;
    HKCodableQuantity * _leftEyeSphere;
    HKCodablePrescriptionType * _prescriptionType;
    HKCodableQuantity * _rightEyeSphere;
    double  _timestampData;
}

@property (nonatomic) bool hasHasImage;
@property (nonatomic) bool hasImage;
@property (nonatomic, readonly) bool hasLeftEyeSphere;
@property (nonatomic, readonly) bool hasPrescriptionType;
@property (nonatomic, readonly) bool hasRightEyeSphere;
@property (nonatomic) bool hasTimestampData;
@property (nonatomic, retain) HKCodableQuantity *leftEyeSphere;
@property (nonatomic, retain) HKCodablePrescriptionType *prescriptionType;
@property (nonatomic, retain) HKCodableQuantity *rightEyeSphere;
@property (nonatomic) double timestampData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHasImage;
- (bool)hasImage;
- (bool)hasLeftEyeSphere;
- (bool)hasPrescriptionType;
- (bool)hasRightEyeSphere;
- (bool)hasTimestampData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)leftEyeSphere;
- (void)mergeFrom:(id)arg1;
- (id)prescriptionType;
- (bool)readFrom:(id)arg1;
- (id)rightEyeSphere;
- (void)setHasHasImage:(bool)arg1;
- (void)setHasImage:(bool)arg1;
- (void)setHasTimestampData:(bool)arg1;
- (void)setLeftEyeSphere:(id)arg1;
- (void)setPrescriptionType:(id)arg1;
- (void)setRightEyeSphere:(id)arg1;
- (void)setTimestampData:(double)arg1;
- (double)timestampData;
- (void)writeTo:(id)arg1;

@end
