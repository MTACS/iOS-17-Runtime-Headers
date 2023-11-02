
@interface PXPeopleBootstrapConfirmationPreviewViewController : UIViewController {
    PHAsset * _keyAsset;
    PHPerson * _person;
    int  _requestID;
    bool  _useLowMemoryMode;
}

@property (nonatomic, readonly) PHAsset *keyAsset;
@property (nonatomic, readonly) PHPerson *person;
@property (nonatomic) int requestID;
@property (nonatomic, readonly) bool useLowMemoryMode;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPerson:(id)arg1 keyAsset:(id)arg2 useLowMemoryMode:(bool)arg3;
- (id)keyAsset;
- (void)loadView;
- (id)person;
- (int)requestID;
- (void)setRequestID:(int)arg1;
- (bool)useLowMemoryMode;
- (void)viewDidLoad;

@end
