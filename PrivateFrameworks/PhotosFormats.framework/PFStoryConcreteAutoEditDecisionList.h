
@interface PFStoryConcreteAutoEditDecisionList : NSObject <PFStoryAutoEditDecisionList> {
    NSArray * _clips;
    NSString * _songAssetIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *clips;
@property (nonatomic, readonly) NSString *diagnosticDescription;
@property (nonatomic, readonly) long long numberOfClips;
@property (nonatomic, readonly) NSString *songAssetIdentifier;

- (void).cxx_destruct;
- (id)clipAtIndex:(long long)arg1;
- (id)clips;
- (id)diagnosticDescription;
- (id)initWithSongAssetIdentifier:(id)arg1 clips:(id)arg2;
- (bool)isEqualToAutoEditDecisionList:(id)arg1;
- (long long)numberOfClips;
- (id)songAssetIdentifier;

@end
