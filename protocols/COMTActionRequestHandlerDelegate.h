
@protocol COMTActionRequestHandlerDelegate <NSObject>

@required

- (void)director:(COMTActionDirector *)arg1 membersChanged:(NSSet *)arg2;
- (void)director:(void *)arg1 performAction:(void *)arg2 from:(void *)arg3 callback:(void *)arg4; // needs 4 arg types, found 10: COMTActionDirector *, COMTAction *, COClusterMember *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, COMTResult *, NSError *, void*

@end
