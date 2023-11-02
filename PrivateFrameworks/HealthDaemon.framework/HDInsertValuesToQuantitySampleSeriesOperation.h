
@interface HDInsertValuesToQuantitySampleSeriesOperation : HDJournalableOperation {
    bool  _didAwakeFromJournal;
    NSUUID * _legacySeriesIdentifier;
    HKQuantitySample * _series;
    NSArray * _values;
}

@property (nonatomic, readonly, copy) HKQuantitySample *series;
@property (nonatomic, readonly, copy) NSArray *values;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeries:(id)arg1 values:(id)arg2;
- (bool)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3;
- (id)series;
- (id)values;

@end
