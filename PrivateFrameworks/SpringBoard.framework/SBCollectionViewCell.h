
@interface SBCollectionViewCell : UICollectionViewCell {
    <SBCollectionViewCellDelegate> * _delegate;
    bool  _performSetHighlighted;
    bool  _protectDelayedUnhighlights;
}

@property (nonatomic) <SBCollectionViewCellDelegate> *delegate;
@property (nonatomic) bool protectDelayedUnhighlights;

- (void).cxx_destruct;
- (void)_didSetHighlighted:(bool)arg1;
- (void)_performSetHighlighted;
- (id)delegate;
- (void)prepareForReuse;
- (bool)protectDelayedUnhighlights;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlighted:(bool)arg1 afterDelay:(double)arg2;
- (void)setProtectDelayedUnhighlights:(bool)arg1;

@end
