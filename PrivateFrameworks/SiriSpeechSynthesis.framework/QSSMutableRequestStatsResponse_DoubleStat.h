
@interface QSSMutableRequestStatsResponse_DoubleStat : QSSRequestStatsResponse_DoubleStat

@property (nonatomic, copy) NSString *name;
@property (nonatomic) double value;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)name;
- (void)setName:(id)arg1;
- (void)setValue:(double)arg1;
- (double)value;

@end
