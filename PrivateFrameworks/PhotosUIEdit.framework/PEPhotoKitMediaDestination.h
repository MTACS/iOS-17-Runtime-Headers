
@interface PEPhotoKitMediaDestination : NSObject <PEMediaDestination> {
    bool  _applyVideoOrientationAsMetadata;
    <PEPhotoKitMediaDestinationDelegate> * _delegate;
    NSMutableDictionary * _pendingRequestsByRequestIdentifier;
}

@property (nonatomic) bool applyVideoOrientationAsMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PEPhotoKitMediaDestinationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_pendingRequestsByRequestIdentifier, nonatomic, readonly) NSMutableDictionary *pendingRequestsByRequestIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fetchUpdatedAssetWithLocalIdentifier:(id)arg1 photoLibrary:(id)arg2;
- (id)_pendingRequestsByRequestIdentifier;
- (void)_requestDidFinish:(id)arg1;
- (id)_saveEditsForPhoto:(id)arg1 saveRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)applyVideoOrientationAsMetadata;
- (void)cancelRequestWithIdentifier:(int)arg1;
- (id)delegate;
- (id)init;
- (double)progressForRequestWithIdentifier:(int)arg1;
- (int)revertEditsForAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)saveEditsForAsset:(id)arg1 usingContentEditingOutput:(id)arg2 livePhotoState:(unsigned short)arg3 completionHandler:(id /* block */)arg4;
- (int)saveInternalEditsForAsset:(id)arg1 usingCompositionController:(id)arg2 contentEditingOutput:(id)arg3 version:(long long)arg4 livePhotoState:(unsigned short)arg5 completionHandler:(id /* block */)arg6;
- (void)setApplyVideoOrientationAsMetadata:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (bool)supportsProgressForRequestWithIdentifier:(int)arg1;

@end
