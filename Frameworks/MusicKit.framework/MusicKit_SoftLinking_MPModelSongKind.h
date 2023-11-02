
@interface MusicKit_SoftLinking_MPModelSongKind : MusicKit_SoftLinking_MPModelKind {
    unsigned long long  _options;
    unsigned long long  _variants;
}

@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) unsigned long long variants;

- (id)initWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (unsigned long long)options;
- (unsigned long long)variants;

@end
