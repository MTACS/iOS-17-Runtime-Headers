
@interface FTMutablePronChoice : FTPronChoice

@property (nonatomic) float log_weight;
@property (nonatomic, copy) NSString *pron_sequence;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (float)log_weight;
- (id)pron_sequence;
- (void)setLog_weight:(float)arg1;
- (void)setPron_sequence:(id)arg1;

@end
