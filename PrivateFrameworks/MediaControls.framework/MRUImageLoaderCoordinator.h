
@interface MRUImageLoaderCoordinator : NSObject {
    NSHashTable * _loaders;
    NSSet * _registeredLoaderArtworkIdentifiers;
    struct CGSize { 
        double width; 
        double height; 
    }  _requestSize;
}

@property (nonatomic, readonly) NSHashTable *loaders;
@property (nonatomic, retain) NSSet *registeredLoaderArtworkIdentifiers;
@property (nonatomic) struct CGSize { double x1; double x2; } requestSize;

+ (id)sharedCoordinator;

- (void).cxx_destruct;
- (id)init;
- (id)loaders;
- (void)recalculateArtworkIdentifiers;
- (void)recalculateRequestSize;
- (void)registerLoader:(id)arg1;
- (void)registeredLoaderArtworkIdentifierDidChange:(id)arg1;
- (id)registeredLoaderArtworkIdentifiers;
- (void)registeredLoaderFittingSizeDidChange:(id)arg1;
- (struct CGSize { double x1; double x2; })requestSize;
- (void)setRegisteredLoaderArtworkIdentifiers:(id)arg1;
- (void)setRequestSize:(struct CGSize { double x1; double x2; })arg1;
- (void)unregisterLoader:(id)arg1;

@end
