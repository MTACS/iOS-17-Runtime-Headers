
@interface FTMutableRequestStatsResponse_BoolStat : FTRequestStatsResponse_BoolStat

@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool value;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)name;
- (void)setName:(id)arg1;
- (void)setValue:(bool)arg1;
- (bool)value;

@end
