
@interface PXSharedLibraryPhotoKitImageProvider : NSObject <PXSharedLibraryImageProvider> {
    long long  _identifier;
    PHShareParticipant * _participant;
    PHPerson * _person;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleResultForRequestWithIdentifier:(long long)arg1 image:(id)arg2 error:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)cancelRequestWithIdentifier:(long long)arg1;
- (id)init;
- (id)initWithParticipant:(id)arg1;
- (id)initWithPerson:(id)arg1;
- (long long)requestImageWithTargetSize:(struct CGSize { double x1; double x2; })arg1 displayScale:(double)arg2 isRTL:(bool)arg3 completionHandler:(id /* block */)arg4;

@end
