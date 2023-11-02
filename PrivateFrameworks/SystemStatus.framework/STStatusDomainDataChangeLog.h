
@interface STStatusDomainDataChangeLog : NSObject {
    NSDictionary * _recordsByKey;
    NSOrderedSet * _sortedRecordKeys;
}

@property (nonatomic, readonly) BSIntegerSet *domainsWithData;

- (void).cxx_destruct;
- (id)currentDataForDomain:(unsigned long long)arg1;
- (id)domainsWithData;
- (id)initWithRecordKeys:(id)arg1;
- (id)recordForKey:(id)arg1;

@end
