
@interface _HDSeriesFreezeJournalEntry : HDJournalEntry {
    NSDictionary * _metadata;
    Class  _seriesClass;
    NSUUID * _seriesUUID;
}

@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly) Class seriesClass;
@property (nonatomic, readonly, copy) NSUUID *seriesUUID;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSeriesUUID:(id)arg1 metadata:(id)arg2 class:(Class)arg3;
- (id)metadata;
- (Class)seriesClass;
- (id)seriesUUID;

@end
