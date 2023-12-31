
@interface ConversationKit.ParticipantsCollectionViewDataSource : NSObject <UICollectionViewDataSource> {
    void didCreateCellForParticipant;
    void offlineParticipants;
    void onlineParticipants;
    void participantIsShownInGrid;
}

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)init;
- (long long)numberOfSectionsInCollectionView:(id)arg1;

@end
