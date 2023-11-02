
@interface _PSContactFillerDataCollectionStatistics : NSObject {
    double  _avg;
    NSMutableArray * _list;
    double  _max;
    double  _min;
    double  _stdev;
}

@property double avg;
@property (nonatomic, retain) NSMutableArray *list;
@property double max;
@property double min;
@property double stdev;

- (void).cxx_destruct;
- (void)addValue:(id)arg1;
- (double)avg;
- (void)calculateStats;
- (id)initWithList:(id)arg1;
- (id)list;
- (double)max;
- (double)min;
- (void)setAvg:(double)arg1;
- (void)setList:(id)arg1;
- (void)setMax:(double)arg1;
- (void)setMin:(double)arg1;
- (void)setStdev:(double)arg1;
- (double)stdev;

@end
