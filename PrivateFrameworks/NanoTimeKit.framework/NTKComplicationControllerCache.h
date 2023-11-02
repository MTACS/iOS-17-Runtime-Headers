
@interface NTKComplicationControllerCache : NSObject <NTKFaceCollectionObserver, NTKFaceObserver> {
    NSMapTable * _controllers;
    NSMapTable * _faceToControllers;
    NTKFaceCollection * _libraryCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_cleanupRemovedFaces;
- (void)_purge;
- (void)_registerFace:(id)arg1;
- (void)_removeControllersForFace:(id)arg1;
- (void)_unregisterFace:(id)arg1;
- (void)_updateControllersForFace:(id)arg1;
- (id)controllerForComplication:(id)arg1 variant:(id)arg2 device:(id)arg3 create:(id /* block */)arg4;
- (void)dealloc;
- (void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)faceCollectionDidReset:(id)arg1;
- (void)faceConfigurationDidChange:(id)arg1;
- (id)init;
- (void)setLibraryCollection:(id)arg1;

@end
