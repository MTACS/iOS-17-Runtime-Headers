
@interface CKLegacyTranscriptLayoutEnvironment : NSObject {
    <NSCollectionLayoutEnvironment> * _collectionLayoutEnvironment;
    UICollectionView * _collectionView;
    CKConversation * _conversation;
    long long  _layoutContext;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _marginInsets;
    CKChatItem * _previousItem;
}

@property (nonatomic, retain) <NSCollectionLayoutEnvironment> *collectionLayoutEnvironment;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) CKConversation *conversation;
@property (nonatomic) long long layoutContext;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic, retain) CKChatItem *previousItem;

- (void).cxx_destruct;
- (id)collectionLayoutEnvironment;
- (id)collectionView;
- (id)conversation;
- (id)init;
- (long long)layoutContext;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (id)previousItem;
- (void)setCollectionLayoutEnvironment:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setLayoutContext:(long long)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreviousItem:(id)arg1;

@end
