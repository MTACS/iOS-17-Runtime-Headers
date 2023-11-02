
@interface RESessionRelevanceProvider : RERelevanceProvider {
    NSDate * _endDate;
    bool  _historic;
    NSDate * _startDate;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (getter=isHistoric, nonatomic, readonly) bool historic;
@property (nonatomic, readonly) NSDate *startDate;

+ (id)_simulationDateFormatter;
+ (id)relevanceSimulatorID;

- (void).cxx_destruct;
- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryEncoding;
- (id)endDate;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 historic:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isHistoric;
- (id)startDate;

@end
