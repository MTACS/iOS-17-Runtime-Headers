
@interface _DPDataRecorder : NSObject <_DPDataRecorder, _DPDataRecorderKeyProperties> {
    bool  _bitStringAlgorithm;
    bool  _directUpload;
    unsigned long long  _fragmentCount;
    unsigned long long  _fragmentWidth;
    NSString * _keyName;
    _DPKeyProperties * _keyProperties;
    double  _privacyParameter;
    NSObject * _randomizer;
    unsigned long long  _range;
}

@property (nonatomic, readonly) bool bitStringAlgorithm;
@property (nonatomic, readonly) bool directUpload;
@property (nonatomic, readonly) unsigned long long fragmentCount;
@property (nonatomic, readonly) unsigned long long fragmentWidth;
@property (nonatomic, readonly, copy) NSString *keyName;
@property (nonatomic, readonly) _DPKeyProperties *keyProperties;
@property (nonatomic, readonly) double privacyParameter;
@property (nonatomic, readonly) NSObject *randomizer;
@property (nonatomic, readonly) unsigned long long range;

- (void).cxx_destruct;
- (bool)bitStringAlgorithm;
- (id)description;
- (bool)directUpload;
- (unsigned long long)fragmentCount;
- (unsigned long long)fragmentWidth;
- (id)init;
- (id)initWithKey:(id)arg1;
- (id)keyName;
- (id)keyProperties;
- (double)privacyParameter;
- (id)randomizer;
- (unsigned long long)range;
- (void)recordBitValues:(id)arg1;
- (void)recordBitValues:(id)arg1 metadata:(id)arg2;
- (void)recordBitVectors:(id)arg1;
- (void)recordBitVectors:(id)arg1 metadata:(id)arg2;
- (void)recordFloatVectors:(id)arg1;
- (void)recordFloatVectors:(id)arg1 metadata:(id)arg2;
- (void)recordNumbers:(id)arg1;
- (void)recordNumbers:(id)arg1 metadata:(id)arg2;
- (void)recordNumbersVectors:(id)arg1;
- (void)recordNumbersVectors:(id)arg1 metadata:(id)arg2;
- (void)recordStrings:(id)arg1;
- (void)recordStrings:(id)arg1 metadata:(id)arg2;
- (void)recordWords:(id)arg1;

@end
