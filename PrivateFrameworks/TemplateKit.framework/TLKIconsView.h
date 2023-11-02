
@interface TLKIconsView : TLKStackView {
    NSMutableArray * _imageViews;
    unsigned long long  _prominence;
    UIFont * _symbolFont;
}

@property (nonatomic, retain) NSMutableArray *imageViews;
@property (nonatomic) unsigned long long prominence;
@property (nonatomic, retain) UIFont *symbolFont;

- (void).cxx_destruct;
- (id)imageViews;
- (id)init;
- (unsigned long long)prominence;
- (void)setImageViews:(id)arg1;
- (void)setProminence:(unsigned long long)arg1;
- (void)setSymbolFont:(id)arg1;
- (id)symbolFont;
- (void)updateIcons:(id)arg1;

@end
