
@interface VCTextStreamConfig : VCMediaStreamConfig {
    unsigned char  _numRedundantPayloads;
    bool  _redEnabled;
    float  _txIntervalMin;
}

@property (nonatomic) unsigned char numRedundantPayloads;
@property (getter=isRedEnabled, nonatomic, readonly) bool redEnabled;
@property (nonatomic) float txIntervalMin;

- (id)initWithClientDictionary:(id)arg1;
- (bool)isRedEnabled;
- (unsigned char)numRedundantPayloads;
- (void)setNumRedundantPayloads:(unsigned char)arg1;
- (void)setTxIntervalMin:(float)arg1;
- (bool)setupCodecWithClientDictionary:(id)arg1;
- (float)txIntervalMin;

@end
