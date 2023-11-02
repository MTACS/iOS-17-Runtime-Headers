
@interface EMCollectionItemIDStateCapturer : EFListStateCapturer <EFListStateCapturerDelegate> {
    <EMCollectionItemIDStateCapturerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <EMCollectionItemIDStateCapturerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)descriptionForItem:(id)arg1;
- (id)initWithTitle:(id)arg1 delegate:(id)arg2;
- (id)itemsForStateCaptureWithErrorString:(id*)arg1;
- (id)labelForStateCapture;

@end
