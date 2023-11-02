
@interface AMSUICommonCollectionView : UICollectionView {
    AMSUICommonCollectionViewHandler * _handler;
}

@property (nonatomic) <AMSUICommonCollectionViewDelegate> *commonDelegate;
@property (nonatomic) <UICollectionViewDelegate> *delegate;
@property (nonatomic, readonly) AMSUICommonCollectionViewHandler *handler;

- (void).cxx_destruct;
- (id)commonDelegate;
- (id)handler;
- (id)init;
- (void)setCommonDelegate:(id)arg1;

@end
