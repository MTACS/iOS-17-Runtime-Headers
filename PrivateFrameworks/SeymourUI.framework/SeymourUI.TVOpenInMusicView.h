
@interface SeymourUI.TVOpenInMusicView : UICollectionReusableView {
    void button;
    void delegate;
    void focusGuide;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  indexPath;
    void shelf;
}

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)openInMusicPressed:(id)arg1;
- (void)prepareForReuse;

@end
