
@interface PXPhotoStreamComposeServiceViewController : SLComposeServiceViewController {
    bool  _addToExistingWorkflow;
    NSString * _albumTitle;
    id /* block */  _completion;
    <PXPhotoStreamComposeServiceDelegate> * _delegate;
    bool  _shouldAllowAlbumPicking;
}

@property (nonatomic) bool addToExistingWorkflow;
@property (nonatomic, retain) NSString *albumTitle;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) <PXPhotoStreamComposeServiceDelegate> *delegate;
@property (nonatomic) bool shouldAllowAlbumPicking;

+ (id)createCanonicalInstance;
+ (void)initialize;
+ (void)registerCanonicalClass:(Class)arg1;

- (void).cxx_destruct;
- (bool)addToExistingWorkflow;
- (id)albumTitle;
- (id /* block */)completion;
- (id)delegate;
- (void)setAddToExistingWorkflow:(bool)arg1;
- (void)setAlbumTitle:(id)arg1;
- (void)setAssetsToShare:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldAllowAlbumPicking:(bool)arg1;
- (void)setSourcesToShare:(id)arg1;
- (bool)shouldAllowAlbumPicking;

@end
