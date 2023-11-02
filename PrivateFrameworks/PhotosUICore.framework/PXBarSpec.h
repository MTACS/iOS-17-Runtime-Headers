
@interface PXBarSpec : NSObject <NSCopying> {
    PXExtendedTraitCollection * _extendedTraitCollection;
}

@property (nonatomic, readonly) PXExtendedTraitCollection *extendedTraitCollection;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)extendedTraitCollection;
- (id)init;
- (id)initWithExtendedTraitCollection:(id)arg1;
- (id)sortedBarItemsByPlacement:(id)arg1;

@end
