
@interface HMMutableUserListeningHistoryUpdateControl : HMUserListeningHistoryUpdateControl

@property (copy) NSArray *accessories;

- (id)accessories;
- (void)addAccessory:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAccessories:(id)arg1;
- (void)removeAccessory:(id)arg1;
- (void)setAccessories:(id)arg1;

@end
