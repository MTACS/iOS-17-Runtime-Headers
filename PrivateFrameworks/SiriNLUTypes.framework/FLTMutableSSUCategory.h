
@interface FLTMutableSSUCategory : FLTSSUCategory

@property (nonatomic, copy) NSArray *groups;
@property (nonatomic) long long type;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)groups;
- (id)init;
- (void)setGroups:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
