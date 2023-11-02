
@protocol MCDPCContainerDelegate <NSObject>

@optional

- (void)container:(MCDPCContainer *)arg1 didInvalidateIndicies:(NSIndexSet *)arg2;
- (void)containerDidChangeCount:(MCDPCContainer *)arg1;
- (void)containerWillChangeCount:(MCDPCContainer *)arg1;

@end
