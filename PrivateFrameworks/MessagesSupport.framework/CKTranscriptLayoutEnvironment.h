
@interface CKTranscriptLayoutEnvironment : NSObject {
    <NSCollectionLayoutEnvironment> * _collectionLayoutEnvironment;
    UICollectionView * _collectionView;
    id  _datasource;
    long long  _layoutContext;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _marginInsets;
    CKTranscriptLayoutMessageEditingContext * _messageEditingContext;
}

@property (nonatomic, retain) <NSCollectionLayoutEnvironment> *collectionLayoutEnvironment;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) id datasource;
@property (nonatomic) long long layoutContext;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic, retain) CKTranscriptLayoutMessageEditingContext *messageEditingContext;

- (void).cxx_destruct;
- (id)collectionLayoutEnvironment;
- (id)collectionView;
- (id)datasource;
- (id)initWithDatasource:(id)arg1 collectionLayoutEnvironment:(id)arg2 collectionView:(id)arg3 marginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg4 layoutContext:(long long)arg5 messageEditingContext:(id)arg6;
- (long long)layoutContext;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (id)messageEditingContext;
- (void)setCollectionLayoutEnvironment:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setDatasource:(id)arg1;
- (void)setLayoutContext:(long long)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMessageEditingContext:(id)arg1;

@end
