
@interface OPTTSMutableTTSReplacement : OPTTSTTSReplacement

@property (nonatomic, copy) NSString *original;
@property (nonatomic, copy) NSString *replacement;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)original;
- (id)replacement;
- (void)setOriginal:(id)arg1;
- (void)setReplacement:(id)arg1;

@end
