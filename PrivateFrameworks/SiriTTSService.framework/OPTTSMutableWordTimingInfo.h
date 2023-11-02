
@interface OPTTSMutableWordTimingInfo : OPTTSWordTimingInfo

@property (nonatomic) unsigned int length;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int sample_idx;
@property (nonatomic) float timestamp;
@property (nonatomic, copy) NSString *word;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (unsigned int)length;
- (unsigned int)offset;
- (unsigned int)sample_idx;
- (void)setLength:(unsigned int)arg1;
- (void)setOffset:(unsigned int)arg1;
- (void)setSample_idx:(unsigned int)arg1;
- (void)setTimestamp:(float)arg1;
- (void)setWord:(id)arg1;
- (float)timestamp;
- (id)word;

@end
