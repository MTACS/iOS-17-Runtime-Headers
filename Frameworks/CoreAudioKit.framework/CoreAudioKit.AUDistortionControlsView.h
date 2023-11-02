
@interface CoreAudioKit.AUDistortionControlsView : UIView <UICollectionViewDelegate> {
    void audioUnit;
    void collectionView;
    void dataSource;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  genericCellRegistration;
    void name;
    void owner;
    void paramDictionary;
    void params;
    void titleLabel;
    void tokenDict;
}

@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end
