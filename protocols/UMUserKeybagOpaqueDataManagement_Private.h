
@protocol UMUserKeybagOpaqueDataManagement_Private

@required

- (NSData *)keybagOpaqueDataForUser:(UMUser *)arg1 withError:(id*)arg2;
- (bool)setKeybagOpaqueDataForUser:(UMUser *)arg1 withOpaqueData:(NSData *)arg2 withError:(id*)arg3;

@end
