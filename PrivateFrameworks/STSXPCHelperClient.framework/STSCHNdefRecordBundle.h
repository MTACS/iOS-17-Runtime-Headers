
@interface STSCHNdefRecordBundle : NSObject {
    STSNDEFRecord * _alternativeRecord;
    NSArray * _auxiliaryRecords;
    STSNDEFRecord * _configurationRecord;
    STSNDEFRecord * _errorRecord;
}

@property (nonatomic, retain) STSNDEFRecord *alternativeRecord;
@property (nonatomic, retain) NSArray *auxiliaryRecords;
@property (nonatomic, retain) STSNDEFRecord *configurationRecord;
@property (nonatomic, retain) STSNDEFRecord *errorRecord;

- (void).cxx_destruct;
- (id)alternativeRecord;
- (id)auxiliaryRecords;
- (id)configurationRecord;
- (id)errorRecord;
- (id)initWithAlternativeRecord:(id)arg1 configurationRecord:(id)arg2 auxiliaryRecords:(id)arg3 errorRecord:(id)arg4;
- (bool)isEqual:(id)arg1;
- (void)setAlternativeRecord:(id)arg1;
- (void)setAuxiliaryRecords:(id)arg1;
- (void)setConfigurationRecord:(id)arg1;
- (void)setErrorRecord:(id)arg1;

@end
