
@interface MusicKit_SoftLinking_MPLibraryAddStatusObserver : NSObject {
    MusicKit_SoftLinking_MPModelObject * _identifyingModelObject;
    id /* block */  _statusBlock;
    MPLibraryAddStatusObserver * _underlyingLibraryAddStatusObserver;
}

@property (nonatomic, readonly) long long currentStatus;
@property (nonatomic, readonly) MusicKit_SoftLinking_MPModelObject *identifyingModelObject;
@property (nonatomic, copy) id /* block */ statusBlock;

- (void).cxx_destruct;
- (void)_handleUpdatedUnderlyingLibraryAddStatus:(long long)arg1;
- (long long)_libraryAddStatusFromUnderlyingStatus:(long long)arg1;
- (long long)currentStatus;
- (id)identifyingModelObject;
- (id)initWithIdentifyingModelObject:(id)arg1;
- (void)setStatusBlock:(id /* block */)arg1;
- (id /* block */)statusBlock;

@end
