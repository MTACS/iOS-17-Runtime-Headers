
@interface CLSInvestigationFeeder : NSObject <CLSInvestigationInterviewDelegate> {
    bool  _allowsInterview;
    NSMutableSet * _focusItems;
    NSSet * _focusPersonLocalIdentifiers;
    unsigned long long  _locationClusteringAlgorithm;
}

@property (nonatomic) bool allowsInterview;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableSet *focusItems;
@property (nonatomic, retain) NSSet *focusPersonLocalIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *localEndDate;
@property (nonatomic, readonly) NSDate *localStartDate;
@property (nonatomic) unsigned long long locationClusteringAlgorithm;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *universalEndDate;
@property (nonatomic, readonly) NSDate *universalStartDate;

- (void).cxx_destruct;
- (void)_enumerateLocationClustersWithGaussians:(id)arg1 enumerationBlock:(id /* block */)arg2;
- (id)_prepareFeederWithProgressBlock:(id /* block */)arg1;
- (id)allItems;
- (bool)allowsInterview;
- (id)approximateLocation;
- (double)behavioralScore;
- (void)enumerateItemsUsingBlock:(id /* block */)arg1;
- (void)enumerateItemsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePersonNames:(id)arg1 withGaussiansUsingBlock:(id /* block */)arg2;
- (id)focusItems;
- (id)focusPersonLocalIdentifiers;
- (id)init;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)localEndDate;
- (id)localEndDateComponents;
- (id)localStartDate;
- (id)localStartDateComponents;
- (unsigned long long)locationClusteringAlgorithm;
- (id)locationClustersWithProgressBlock:(id /* block */)arg1;
- (unsigned long long)numberOfItems;
- (unsigned long long)numberOfItemsInInvestigation:(id)arg1;
- (unsigned long long)numberOfRegularGemItems;
- (unsigned long long)numberOfShinyGemItems;
- (id)prepareWithProgressBlock:(id /* block */)arg1;
- (id)privateItems;
- (void)setAllowsInterview:(bool)arg1;
- (void)setFocusPersonLocalIdentifiers:(id)arg1;
- (void)setLocationClusteringAlgorithm:(unsigned long long)arg1;
- (id)sharedItems;
- (id)universalEndDate;
- (id)universalStartDate;

@end
