
@interface HREStandardAsyncRecommendationGenerationProcess : NSObject {
    HMHome * _home;
    NSSet * _homeRecommendableObjects;
    unsigned long long  _options;
    NSSet * _sourceItems;
    NSSet * _sourceRecommendableObjects;
    HFAccessoryTypeGroup * _typeGroup;
}

@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) NSSet *homeRecommendableObjects;
@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) NSSet *sourceItems;
@property (nonatomic, retain) NSSet *sourceRecommendableObjects;
@property (nonatomic, retain) HFAccessoryTypeGroup *typeGroup;

- (void).cxx_destruct;
- (id)generateRecommendations;
- (id)home;
- (id)homeRecommendableObjects;
- (id)initWithHome:(id)arg1 sourceItems:(id)arg2 accessoryTypeGroup:(id)arg3 options:(unsigned long long)arg4;
- (unsigned long long)options;
- (void)setHome:(id)arg1;
- (void)setHomeRecommendableObjects:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setSourceItems:(id)arg1;
- (void)setSourceRecommendableObjects:(id)arg1;
- (void)setTypeGroup:(id)arg1;
- (bool)shouldGenerateRecommendations;
- (id)sourceItems;
- (id)sourceRecommendableObjects;
- (id)typeGroup;

@end
