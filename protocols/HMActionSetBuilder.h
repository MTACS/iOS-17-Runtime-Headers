
@protocol HMActionSetBuilder

@required

- (NSSet *)actions;
- (void)addAction:(HMAction *)arg1;
- (NSString *)name;
- (void)removeAction:(HMAction *)arg1;
- (void)setActions:(NSSet *)arg1;
- (void)setName:(NSString *)arg1;

@end
