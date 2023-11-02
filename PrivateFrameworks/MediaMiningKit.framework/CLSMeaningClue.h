
@interface CLSMeaningClue : CLSClue <PGGraphIngestPlace, PGGraphIngestScene> {
    id  _relatedData;
}

@property (nonatomic, readonly) double confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isReliable;
@property (nonatomic, readonly) unsigned long long numberOfAssets;
@property (nonatomic, readonly) unsigned long long numberOfDominantSceneAssets;
@property (nonatomic, readonly) unsigned long long numberOfHighConfidenceAssets;
@property (nonatomic, readonly) unsigned long long numberOfSearchConfidenceAssets;
@property (nonatomic, readonly) NSString *placeInterestType;
@property (retain) id relatedData;
@property (nonatomic, readonly) double relevance;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit

+ (id)clueWithValue:(id)arg1 forKey:(id)arg2;
+ (id)clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4;

- (void).cxx_destruct;
- (id)init;
- (bool)isEqualToClue:(id)arg1;
- (id)relatedData;
- (void)setRelatedData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph

- (id)identifier;
- (bool)isReliable;
- (unsigned long long)numberOfAssets;
- (unsigned long long)numberOfDominantSceneAssets;
- (unsigned long long)numberOfHighConfidenceAssets;
- (unsigned long long)numberOfSearchConfidenceAssets;
- (id)placeInterestType;

@end
