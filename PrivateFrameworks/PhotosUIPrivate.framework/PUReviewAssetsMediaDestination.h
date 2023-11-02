
@interface PUReviewAssetsMediaDestination : NSObject <PEMediaDestination> {
    NSURL * __desiredOutputDirectory;
    PUEditableMediaProvider * __mediaProvider;
    NSMutableDictionary * _pendingRequestsByRequestIdentifier;
}

@property (nonatomic, readonly) NSURL *_desiredOutputDirectory;
@property (nonatomic, readonly) PUEditableMediaProvider *_mediaProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_pendingRequestsByRequestIdentifier, nonatomic, readonly) NSMutableDictionary *pendingRequestsByRequestIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_desiredOutputDirectory;
- (id)_mediaProvider;
- (id)_pendingRequestsByRequestIdentifier;
- (void)_requestDidFinish:(id)arg1;
- (id)_saveEditsWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)_workImageVersionForContentEditingOutput:(id)arg1;
- (void)cancelRequestWithIdentifier:(int)arg1;
- (id)initWithOutputDirectory:(id)arg1 mediaProvider:(id)arg2;
- (double)progressForRequestWithIdentifier:(int)arg1;
- (int)revertEditsForAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)saveEditsForAsset:(id)arg1 usingContentEditingOutput:(id)arg2 livePhotoState:(unsigned short)arg3 completionHandler:(id /* block */)arg4;
- (int)saveInternalEditsForAsset:(id)arg1 usingCompositionController:(id)arg2 contentEditingOutput:(id)arg3 version:(long long)arg4 livePhotoState:(unsigned short)arg5 completionHandler:(id /* block */)arg6;
- (bool)supportsProgressForRequestWithIdentifier:(int)arg1;

@end
