
@interface PKPendingInvitationRequest : NSObject {
    id /* block */  _completion;
    PKAppletSubcredentialSharingInvitation * _invitation;
}

@property (nonatomic, readonly) PKAppletSubcredentialSharingInvitation *invitation;

- (void).cxx_destruct;
- (id)initWithInvitation:(id)arg1 completion:(id /* block */)arg2;
- (id)invitation;
- (void)invokeCompletionWithInvitation:(id)arg1 error:(id)arg2;

@end
