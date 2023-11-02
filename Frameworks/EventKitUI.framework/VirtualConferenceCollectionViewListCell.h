
@interface VirtualConferenceCollectionViewListCell : UICollectionViewListCell {
    EKVirtualConferenceRoomType * _currentRoomType;
}

@property (nonatomic, retain) EKVirtualConferenceRoomType *currentRoomType;

- (void).cxx_destruct;
- (id)currentRoomType;
- (void)setCurrentRoomType:(id)arg1;

@end
