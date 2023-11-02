
@protocol RBStateCaptureManaging <NSObject>

@required

- (void)addItem:(id <RBStateCapturing>)arg1;
- (void)addItem:(id <RBStateCapturing>)arg1 withIdentifier:(NSString *)arg2;
- (void)addItemWithTitle:(void *)arg1 identifier:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 7: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, id /* block */, void*
- (NSSet *)identifiers;
- (void)removeItem:(id <RBStateCapturing>)arg1;
- (void)removeItemWithIdentifier:(NSString *)arg1;
- (NSString *)stateForSubsystem:(NSString *)arg1;

@end
