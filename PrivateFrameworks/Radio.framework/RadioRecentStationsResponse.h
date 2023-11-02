
@interface RadioRecentStationsResponse : NSObject {
    NSDictionary * _responseDictionary;
}

@property (nonatomic, readonly, copy) NSArray *stationDictionaries;
@property (nonatomic, readonly, copy) NSArray *stationGroups;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)arg1;
- (id)stationDictionaries;
- (id)stationGroups;

@end
