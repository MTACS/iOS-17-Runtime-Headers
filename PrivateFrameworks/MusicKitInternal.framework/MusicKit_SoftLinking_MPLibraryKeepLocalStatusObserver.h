
@interface MusicKit_SoftLinking_MPLibraryKeepLocalStatusObserver : NSObject {
    MusicKit_SoftLinking_MPModelObject * _identifyingModelObject;
    id /* block */  _statusBlock;
    MPLibraryKeepLocalStatusObserver * _underlyingLibraryKeepLocalStatusObserver;
}

@property (nonatomic, readonly) struct MusicKit_SoftLinking_MPLibraryActiveKeepLocalStatus { long long x1; unsigned long long x2; double x3; } currentStatus;
@property (nonatomic, readonly) MusicKit_SoftLinking_MPModelObject *identifyingModelObject;
@property (nonatomic, copy) id /* block */ statusBlock;

- (void).cxx_destruct;
- (struct MusicKit_SoftLinking_MPLibraryActiveKeepLocalStatus { long long x1; unsigned long long x2; double x3; })_activeKeepLocalStatusFromUnderlyingStatus:(struct MPLibraryActiveKeepLocalStatus { long long x1; double x2; })arg1 underlyingDownloadPauseReasons:(unsigned long long)arg2;
- (void)_handleUpdatedUnderlyingActiveKeepLocalStatus:(struct MPLibraryActiveKeepLocalStatus { long long x1; double x2; })arg1;
- (void)calculateDownloadProgressWithChildren:(id)arg1;
- (struct MusicKit_SoftLinking_MPLibraryActiveKeepLocalStatus { long long x1; unsigned long long x2; double x3; })currentStatus;
- (id)identifyingModelObject;
- (id)initWithIdentifyingModelObject:(id)arg1;
- (void)setStatusBlock:(id /* block */)arg1;
- (id /* block */)statusBlock;

@end
