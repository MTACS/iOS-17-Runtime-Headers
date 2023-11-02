
@interface MusicKit_SoftLinking_MPMutableSectionedCollection : MusicKit_SoftLinking_MPSectionedCollection {
    MPMutableSectionedCollection * _underlyingSectionedCollection;
}

@property (nonatomic, readonly) MPMutableSectionedCollection *_underlyingSectionedCollection;

- (void).cxx_destruct;
- (id)_underlyingSectionedCollection;
- (void)appendItem:(id)arg1;
- (void)appendItems:(id)arg1;
- (void)appendSection:(id)arg1;
- (id)init;
- (id)initWithUnderlyingSectionedCollection:(id)arg1;

@end
