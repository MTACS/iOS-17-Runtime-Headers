
@interface MusicKit_SoftLinking_MPModelPlaylistKind : MusicKit_SoftLinking_MPModelKind {
    unsigned long long  _options;
    unsigned long long  _variants;
}

@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) unsigned long long variants;

- (unsigned long long)_underlyingOptionsFromOptions:(unsigned long long)arg1;
- (unsigned long long)_underlyingVariantsFromVariants:(unsigned long long)arg1;
- (id)initWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (unsigned long long)options;
- (unsigned long long)variants;

@end
