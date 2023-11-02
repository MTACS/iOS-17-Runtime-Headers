
@interface _PUProgressIndicatorTileView : UIView {
    struct { 
        bool respondsToDidChangeTraitCollection; 
    }  _delegateFlags;
    UIView * _extraHittableSubview;
    bool  _showingErrorProgressView;
    <_PUProgressIndicatorTileViewDelegate> * _traitCollectionDelegate;
}

@property (nonatomic) UIView *extraHittableSubview;
@property (nonatomic) bool showingErrorProgressView;
@property (nonatomic) <_PUProgressIndicatorTileViewDelegate> *traitCollectionDelegate;

- (void).cxx_destruct;
- (id)extraHittableSubview;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setExtraHittableSubview:(id)arg1;
- (void)setShowingErrorProgressView:(bool)arg1;
- (void)setTraitCollectionDelegate:(id)arg1;
- (bool)showingErrorProgressView;
- (id)traitCollectionDelegate;
- (void)traitCollectionDidChange:(id)arg1;

@end
