
@interface PXGPPTAnimationLayout : PXGLayout <PXGSolidColorSource> {
    NSArray * _colors;
    unsigned int  _numberOfColumns;
    unsigned int  _numberOfRows;
    long long  _style;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (nonatomic, readonly) NSString *configurationDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int numberOfColumns;
@property (nonatomic) unsigned int numberOfRows;
@property (nonatomic) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateContent;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)configurationDescription;
- (id)init;
- (unsigned int)numberOfColumns;
- (unsigned int)numberOfRows;
- (void)referenceSizeDidChange;
- (void)setNumberOfColumns:(unsigned int)arg1;
- (void)setNumberOfRows:(unsigned int)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;
- (void)update;

@end
