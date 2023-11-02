
@interface SearchUIOfferButtonView : TLKStoreButton {
    bool  _adjustsFontSizeToFitWidth;
    NSString * _symbolImageName;
}

@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic, retain) NSString *symbolImageName;

- (void).cxx_destruct;
- (bool)adjustsFontSizeToFitWidth;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setSymbolImageName:(id)arg1;
- (id)symbolImageName;

@end
