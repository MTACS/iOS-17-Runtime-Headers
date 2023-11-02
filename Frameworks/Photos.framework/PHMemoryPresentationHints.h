
@interface PHMemoryPresentationHints : NSObject <PHCollectionPresentationHints> {
    unsigned long long  _forbiddenMoods;
    NSDictionary * _musicGenreDistribution;
    long long  _qualityCategory;
    unsigned long long  _recommendedMoods;
    unsigned long long  _socialRelationships;
    long long  _tripType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long forbiddenMoods;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *musicGenreDistribution;
@property (nonatomic, readonly) long long qualityCategory;
@property (nonatomic, readonly) unsigned long long recommendedMoods;
@property (nonatomic, readonly) unsigned long long socialRelationships;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long tripType;

+ (unsigned long long)socialRelationshipsFromMemory:(id)arg1;
+ (long long)tripTypeFromMemory:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)forbiddenMoods;
- (id)initWithMemory:(id)arg1;
- (id)musicGenreDistribution;
- (long long)qualityCategory;
- (unsigned long long)recommendedMoods;
- (unsigned long long)socialRelationships;
- (long long)tripType;

@end
