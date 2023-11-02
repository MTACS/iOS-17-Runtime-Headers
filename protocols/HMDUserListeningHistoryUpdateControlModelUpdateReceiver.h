
@protocol HMDUserListeningHistoryUpdateControlModelUpdateReceiver <NSObject>

@required

- (void)userListeningHistoryUpdateControlModelRemoved:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: HMDUserListeningHistoryUpdateControlModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMBAction *, void*
- (void)userListeningHistoryUpdateControlModelUpdated:(void *)arg1 previousModel:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: HMDUserListeningHistoryUpdateControlModel *, HMDUserListeningHistoryUpdateControlModel *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HMBAction *, void*

@end
