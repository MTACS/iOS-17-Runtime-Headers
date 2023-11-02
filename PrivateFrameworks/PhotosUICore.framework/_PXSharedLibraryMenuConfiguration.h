
@interface _PXSharedLibraryMenuConfiguration : NSObject <PXSharedLibraryMenuConfiguration> {
    PXMenuBuilder * _extraItemsMenuBuilder;
}

@property (nonatomic, readonly) PXMenuBuilder *extraItemsMenuBuilder;

- (void).cxx_destruct;
- (id)extraItemsMenuBuilder;
- (id)initWithMenuBuilder:(id)arg1;

@end
