
@protocol ICPeerMessageControllerDelegate <NSObject>

@required

- (bool)sendMessage:(NSData *)arg1 toSource:(id <NSCopying>)arg2 error:(id*)arg3;

@end
