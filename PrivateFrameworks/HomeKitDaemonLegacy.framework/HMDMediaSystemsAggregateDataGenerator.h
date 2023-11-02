
@interface HMDMediaSystemsAggregateDataGenerator : NSObject <HMDMediaGroupsAggregateDataGenerator> {
    <HMDMediaSystemsAggregateDataGeneratorDataSource> * _dataSource;
}

@property <HMDMediaSystemsAggregateDataGeneratorDataSource> *dataSource;

+ (unsigned long long)deriveSupportedOptionsFromLeftDestination:(id)arg1 rightDestination:(id)arg2;
+ (id)derivedDestinationForGroup:(id)arg1 leftDestination:(id)arg2 rightDestination:(id)arg3;
+ (id)derivedMediaDestinationIdentifierForGroupIdentifier:(id)arg1;
+ (bool)isValidLeftDestination:(id)arg1 rightDestination:(id)arg2;

- (void).cxx_destruct;
- (id)aggregateDataWithDestinations:(id)arg1 controllers:(id)arg2 groups:(id)arg3;
- (id)dataSource;
- (id)destinationWithRoleType:(unsigned long long)arg1 mediaSystemData:(id)arg2 destinations:(id)arg3;
- (bool)hasRoleType:(unsigned long long)arg1 mediaSystemData:(id)arg2 destination:(id)arg3;
- (id)nameForMediaSystemData:(id)arg1 room:(id)arg2;
- (id)roomForAllDestinationParentIdentifiers:(id)arg1;
- (void)setDataSource:(id)arg1;

@end
