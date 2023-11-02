
@interface LPKPerfResultEntry : NSObject {
    NSString * _entryName;
    NSMutableArray * _entryValues;
    double  _meanValue;
    double  _medianValue;
    bool  _needsReCalculation;
}

@property (nonatomic, copy) NSString *entryName;
@property (nonatomic, retain) NSMutableArray *entryValues;
@property (nonatomic, readonly) double meanValue;
@property (nonatomic, readonly) double medianValue;
@property (nonatomic) bool needsReCalculation;

- (void).cxx_destruct;
- (void)_reCalculateValuesIfNeeded;
- (void)addEntryValue:(double)arg1;
- (id)entryName;
- (id)entryValues;
- (id)init;
- (double)meanValue;
- (double)medianValue;
- (bool)needsReCalculation;
- (void)setEntryName:(id)arg1;
- (void)setEntryValues:(id)arg1;
- (void)setNeedsReCalculation:(bool)arg1;

@end
