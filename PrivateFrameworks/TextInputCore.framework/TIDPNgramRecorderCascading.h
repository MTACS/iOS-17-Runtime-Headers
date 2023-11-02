
@interface TIDPNgramRecorderCascading : TIDPRecorder {
    unsigned long long  _n;
}

@property (nonatomic) unsigned long long n;

- (id)initWithTypingSession:(id)arg1 aligned:(id)arg2 n:(unsigned long long)arg3;
- (unsigned long long)n;
- (bool)report;
- (void)setN:(unsigned long long)arg1;

@end
