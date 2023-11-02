
@interface MTNumberDeresAction : MTTreatmentAction {
    NSArray * _buckets;
    double  _precision;
}

@property (nonatomic, retain) NSArray *buckets;
@property (nonatomic) double precision;

- (void).cxx_destruct;
- (id)buckets;
- (id)initWithField:(id)arg1 configDictionary:(id)arg2;
- (id)performAction:(id)arg1 context:(id)arg2;
- (double)precision;
- (void)setBuckets:(id)arg1;
- (void)setPrecision:(double)arg1;

@end
