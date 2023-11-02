
@interface FTMutableSpan : FTSpan

@property (nonatomic) bool do_not_translate;
@property (nonatomic) int end_index;
@property (nonatomic, copy) NSString *meta_info;
@property (nonatomic) int start_index;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)do_not_translate;
- (int)end_index;
- (id)init;
- (id)meta_info;
- (void)setDo_not_translate:(bool)arg1;
- (void)setEnd_index:(int)arg1;
- (void)setMeta_info:(id)arg1;
- (void)setStart_index:(int)arg1;
- (int)start_index;

@end
