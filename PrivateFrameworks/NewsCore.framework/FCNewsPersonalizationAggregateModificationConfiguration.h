
@interface FCNewsPersonalizationAggregateModificationConfiguration : NSObject {
    FCNewsPersonalizationAggregateModificationData * _aggregateModificationData;
    FCNewsPersonalizationAggregateModificationData * _baselineModificationData;
}

@property (nonatomic, retain) FCNewsPersonalizationAggregateModificationData *aggregateModificationData;
@property (nonatomic, retain) FCNewsPersonalizationAggregateModificationData *baselineModificationData;

- (void).cxx_destruct;
- (id)aggregateModificationData;
- (id)baselineModificationData;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (void)setAggregateModificationData:(id)arg1;
- (void)setBaselineModificationData:(id)arg1;

@end
