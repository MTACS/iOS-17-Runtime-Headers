
@interface _MPModelLibraryKeepLocalChangeRequestUpdateItemOperation : MPAsyncOperation {
    long long  _keepLocal;
    unsigned long long  _keepLocalConstraints;
    MPMediaItem * _mediaItem;
}

@property (nonatomic) long long keepLocal;
@property (nonatomic) unsigned long long keepLocalConstraints;
@property (nonatomic, retain) MPMediaItem *mediaItem;

- (void).cxx_destruct;
- (void)execute;
- (long long)keepLocal;
- (unsigned long long)keepLocalConstraints;
- (id)mediaItem;
- (void)setKeepLocal:(long long)arg1;
- (void)setKeepLocalConstraints:(unsigned long long)arg1;
- (void)setMediaItem:(id)arg1;

@end
