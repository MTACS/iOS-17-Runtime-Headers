
@interface BMBehaviorDatabaseMetadata : NSObject {
    NSDateInterval * _eventInterval;
    NSArray * _itemTypeIdentifiers;
    unsigned long long  _minimumAbsoluteSupport;
    double  _minimumConfidence;
    NSDate * _miningDate;
    unsigned long long  _numberOfBaskets;
    double  _samplingInterval;
    NSArray * _targetTypeIdentifiers;
}

@property (nonatomic, readonly, copy) NSDateInterval *eventInterval;
@property (nonatomic, readonly) NSArray *itemTypeIdentifiers;
@property (nonatomic, readonly) unsigned long long minimumAbsoluteSupport;
@property (nonatomic, readonly) double minimumConfidence;
@property (nonatomic, readonly, copy) NSDate *miningDate;
@property (nonatomic, readonly) unsigned long long numberOfBaskets;
@property (nonatomic, readonly) double samplingInterval;
@property (nonatomic, readonly) NSArray *targetTypeIdentifiers;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresntation;
- (id)eventInterval;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMiningDate:(id)arg1 eventInterval:(id)arg2 minimumAbsoluteSupport:(unsigned long long)arg3 minimumConfidence:(double)arg4 samplingInterval:(double)arg5 itemTypeIdentifiers:(id)arg6 targetTypeIdentifiers:(id)arg7 numberOfBaskets:(unsigned long long)arg8;
- (bool)isEqual:(id)arg1;
- (id)itemTypeIdentifiers;
- (unsigned long long)minimumAbsoluteSupport;
- (double)minimumConfidence;
- (id)miningDate;
- (unsigned long long)numberOfBaskets;
- (double)samplingInterval;
- (id)targetTypeIdentifiers;

@end
