
@interface PFAssetAdjustmentFingerprintData : NSObject {
    NSString * _adjustmentCompoundVersion;
    NSString * _adjustmentCreatorCode;
    unsigned long long  _adjustmentSourceType;
    NSString * _adjustmentType;
    NSData * _baseImage;
    NSString * _baseImageFingerprint;
    NSData * _largeAdjustmentData;
    NSString * _largeAdjustmentDataFingerprint;
    NSData * _secondaryAdjustmentData;
    NSData * _simpleAdjustmentData;
}

@property (nonatomic, copy) NSString *adjustmentCompoundVersion;
@property (nonatomic, copy) NSString *adjustmentCreatorCode;
@property (nonatomic) unsigned long long adjustmentSourceType;
@property (nonatomic, copy) NSString *adjustmentType;
@property (nonatomic, copy) NSData *baseImage;
@property (nonatomic, copy) NSString *baseImageFingerprint;
@property (nonatomic, copy) NSData *largeAdjustmentData;
@property (nonatomic, copy) NSString *largeAdjustmentDataFingerprint;
@property (nonatomic, copy) NSData *secondaryAdjustmentData;
@property (nonatomic, copy) NSData *simpleAdjustmentData;

- (void).cxx_destruct;
- (id)adjustmentCompoundVersion;
- (id)adjustmentCreatorCode;
- (unsigned long long)adjustmentSourceType;
- (id)adjustmentType;
- (id)baseImage;
- (id)baseImageFingerprint;
- (id)largeAdjustmentData;
- (id)largeAdjustmentDataFingerprint;
- (id)secondaryAdjustmentData;
- (void)setAdjustmentCompoundVersion:(id)arg1;
- (void)setAdjustmentCreatorCode:(id)arg1;
- (void)setAdjustmentSourceType:(unsigned long long)arg1;
- (void)setAdjustmentType:(id)arg1;
- (void)setBaseImage:(id)arg1;
- (void)setBaseImageFingerprint:(id)arg1;
- (void)setLargeAdjustmentData:(id)arg1;
- (void)setLargeAdjustmentDataFingerprint:(id)arg1;
- (void)setSecondaryAdjustmentData:(id)arg1;
- (void)setSimpleAdjustmentData:(id)arg1;
- (id)simpleAdjustmentData;

@end