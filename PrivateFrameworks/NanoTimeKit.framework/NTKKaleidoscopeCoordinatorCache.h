
@interface NTKKaleidoscopeCoordinatorCache : NSObject <NTKFaceCollectionObserver> {
    unsigned int  _isCleanupScheduled;
    unsigned long long  _kaleidoscopeFaceCount;
    NTKFaceCollection * _libraryCollection;
    NSMutableArray * _pathsToTouch;
    NSMutableDictionary * _pathsToWrite;
    NTKTaskScheduler * _taskScheduler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedCache;

- (void).cxx_destruct;
- (void)_computeKaleidoscopeFaceCount;
- (void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)faceCollectionDidReset:(id)arg1;
- (id)provideAtlasBacking:(id)arg1 uuid:(id)arg2 uuidLuma:(id)arg3 uuidChroma:(id)arg4;
- (void)setLibraryCollection:(id)arg1;

@end
