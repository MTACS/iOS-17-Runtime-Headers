
@interface SHShazamKitServiceConnectionClient : NSObject <SHShazamKitClient> {
    <SHShazamKitClient> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SHShazamKitClient> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_library:(id)arg1 didChangeWithSnapshot:(id)arg2;
- (void)_library:(id)arg1 didProduceError:(id)arg2 failedItemIdentifiers:(id)arg3;
- (void)_libraryDidCompleteSync:(id)arg1;
- (void)_libraryWillBeginSync:(id)arg1;
- (id)delegate;
- (void)didCalculateSpectralData:(id)arg1;
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
