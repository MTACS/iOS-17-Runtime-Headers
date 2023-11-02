
@interface PHASESharedListener : PHASEListener {
    long long  _updateMode;
}

@property (nonatomic) long long updateMode;

- (bool)addChild:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)initInternalWithEngine:(id)arg1;
- (id)initWithEngine:(id)arg1;
- (id)initWithEngine:(id)arg1 entityType:(unsigned int)arg2;
- (void)removeChild:(id)arg1;
- (void)removeChildren;
- (void)setGain:(double)arg1;
- (void)setTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setUpdateMode:(long long)arg1;
- (long long)updateMode;

@end
