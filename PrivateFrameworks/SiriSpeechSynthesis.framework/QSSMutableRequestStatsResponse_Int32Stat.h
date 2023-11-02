
@interface QSSMutableRequestStatsResponse_Int32Stat : QSSRequestStatsResponse_Int32Stat

@property (nonatomic, copy) NSString *name;
@property (nonatomic) int value;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)name;
- (void)setName:(id)arg1;
- (void)setValue:(int)arg1;
- (int)value;

@end
