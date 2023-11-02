
@interface NTKFaceSnapshotter : NSObject <NTKComplicationCollectionObserver> {
    NTKFaceSnapshottingWindow * _snapshotWindow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultModernSnapshotOptions;
+ (id)renderSnapshotAndTexture:(id*)arg1 fromWindow:(id)arg2;
+ (id)renderSnapshotFromWindow:(id)arg1;

- (void).cxx_destruct;
- (void)_hideSnapshotWindow;
- (void)_mainQueue_serviceRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_serviceRequestIfIdle;
- (void)_setupNotificationForCollectionLoadForDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)_showSnapshotWindowForDevice:(id)arg1;
- (void)complicationCollectionDidLoad:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)provideSnapshotOfFace:(id)arg1 completion:(id /* block */)arg2;
- (void)provideSnapshotOfFace:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)viewControllerForFace:(id)arg1 withOptions:(id)arg2;

@end
