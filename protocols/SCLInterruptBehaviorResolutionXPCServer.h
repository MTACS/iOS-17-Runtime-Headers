
@protocol SCLInterruptBehaviorResolutionXPCServer <NSObject>

@required

- (oneway void)resolveBehaviorForEvent:(void *)arg1 clientIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: SCLInterruptEvent *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SCLInterruptEventBehavior *, NSError *, void*

@end
