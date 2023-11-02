
@interface ConversationKit.ConduitApprovalDelegate : NSObject <TUNeighborhoodActivityConduitApprovalDelegate> {
    void manager;
}

- (void).cxx_destruct;
- (void)approveSplitSessionForConversation:(id)arg1 requestedFromDevice:(id)arg2 pullContext:(long long)arg3 completion:(id /* block */)arg4;
- (void)cancelSplitSessionApproval;
- (id)init;

@end
