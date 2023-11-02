
@interface PXLibraryFilterState : PXObservable <NSCopying, PXChangeObserver, PXFilterState, PXPreferencesObserver> {
    bool  _sharedLibraryBadgeEnabled;
    PXSharedLibraryStatusProvider * _sharedLibraryStatusProvider;
    long long  _viewMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFiltering;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) NSString *localizedFooterDescription;
@property (getter=isSharedLibraryBadgeEnabled, nonatomic) bool sharedLibraryBadgeEnabled;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *sharedLibraryStatusProvider;
@property (nonatomic, readonly) unsigned short sharingFilter;
@property (readonly) Class superclass;
@property (nonatomic) long long viewMode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSharedLibraryStatusProvider:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFiltering;
- (bool)isLibraryFilterActive:(long long)arg1;
- (bool)isSharedLibraryBadgeEnabled;
- (id)localizedDescription;
- (id)localizedFooterDescription;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)predicateForUseCase:(unsigned long long)arg1;
- (void)preferencesDidChange;
- (void)setSharedLibraryBadgeEnabled:(bool)arg1;
- (void)setViewMode:(long long)arg1;
- (id)sharedLibraryStatusProvider;
- (unsigned short)sharingFilter;
- (long long)viewMode;

@end
