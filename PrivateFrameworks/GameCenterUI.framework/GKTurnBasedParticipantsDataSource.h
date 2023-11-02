
@interface GKTurnBasedParticipantsDataSource : GKBasicCollectionViewDataSource {
    GKTurnBasedMatch * _match;
}

@property (nonatomic, retain) GKTurnBasedMatch *match;
@property (nonatomic, readonly) NSString *sectionTitle;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configureCollectionView:(id)arg1;
- (id)match;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (id)sectionTitle;
- (void)setMatch:(id)arg1;

@end
