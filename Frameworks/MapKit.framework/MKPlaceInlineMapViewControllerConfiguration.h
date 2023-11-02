
@interface MKPlaceInlineMapViewControllerConfiguration : NSObject {
    bool  _suppressLookAround;
    bool  _useWindowTraitCollectionForUserInterfaceStyle;
}

@property (nonatomic) bool suppressLookAround;
@property (nonatomic) bool useWindowTraitCollectionForUserInterfaceStyle;

+ (id)configurationForPlaceViewControllerOptions:(unsigned long long)arg1;

- (void)setSuppressLookAround:(bool)arg1;
- (void)setUseWindowTraitCollectionForUserInterfaceStyle:(bool)arg1;
- (bool)suppressLookAround;
- (bool)useWindowTraitCollectionForUserInterfaceStyle;

@end
