
@interface CKTipKitCollectionViewCell : UICollectionViewCell {
    TPKContentView * _tipKitContentView;
}

@property (nonatomic, retain) TPKContentView *tipKitContentView;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)dealloc;
- (void)setTipKitContentView:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (id)tipKitContentView;

@end
