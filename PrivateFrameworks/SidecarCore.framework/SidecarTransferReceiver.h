
@interface SidecarTransferReceiver : SidecarTransfer {
    NSMutableDictionary * _groups;
    NSMutableArray * _orderedGroups;
}

- (void).cxx_destruct;
- (id /* block */)_resumeMessage:(id)arg1;
- (void)handleMessage:(id)arg1;
- (id)initWithSession:(id)arg1 requestID:(long long)arg2;

@end
