
@interface SearchUICollectionViewAttributes : NSObject {
    TLKAppearance * _appearance;
    SearchUICommandEnvironment * _commandEnvironment;
    bool  _inPreviewPlatter;
    bool  _shouldUseInsetRoundedSections;
}

@property (nonatomic, retain) TLKAppearance *appearance;
@property (retain) SearchUICommandEnvironment *commandEnvironment;
@property (nonatomic) bool inPreviewPlatter;
@property (nonatomic) bool shouldUseInsetRoundedSections;

- (void).cxx_destruct;
- (id)appearance;
- (id)commandEnvironment;
- (bool)inPreviewPlatter;
- (void)setAppearance:(id)arg1;
- (void)setCommandEnvironment:(id)arg1;
- (void)setInPreviewPlatter:(bool)arg1;
- (void)setShouldUseInsetRoundedSections:(bool)arg1;
- (bool)shouldUseInsetRoundedSections;

@end
