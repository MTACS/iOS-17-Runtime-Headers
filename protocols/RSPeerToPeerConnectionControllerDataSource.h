
@protocol RSPeerToPeerConnectionControllerDataSource <NSObject>

@required

- (NSArray *)allowedRemotePeerDisplayNames;
- (NSString *)localPeerDisplayName;
- (NSArray *)supportedStateTypes;

@optional

- (void)stateForStateType:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, id, void*

@end
