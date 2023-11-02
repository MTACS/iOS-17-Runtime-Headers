
@interface PXEditorialSectionBodyLayout : PXDayAssetsSectionBodyLayout <PXPhotosSectionedLayoutBody> {
    bool  _disableClipping;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableClipping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)disableClipping;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sectionRect;
- (void)setDisableClipping:(bool)arg1;

@end
