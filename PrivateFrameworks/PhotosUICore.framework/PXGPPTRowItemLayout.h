
@interface PXGPPTRowItemLayout : PXGLayout <PXGSolidColorSource> {
    UIColor * _color;
    unsigned int  _colorSpriteIndex;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (nonatomic, readonly) UIColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateContent;
- (void)_updateContent;
- (id)color;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)init;
- (id)initWithColor:(id)arg1;
- (void)referenceSizeDidChange;
- (void)update;

@end
