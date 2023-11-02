
@interface SFCollaborationCloudSharingMailResult : NSObject <NSSecureCoding> {
    NSNumber * _allowOthersToInvite;
    NSString * _body;
    NSNumber * _canEdit;
    CKContainerID * _containerID;
    NSError * _error;
    NSString * _subject;
}

@property (nonatomic, readonly) NSNumber *allowOthersToInvite;
@property (nonatomic, readonly, copy) NSString *body;
@property (nonatomic, readonly) NSNumber *canEdit;
@property (nonatomic, readonly) CKContainerID *containerID;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly, copy) NSString *subject;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowOthersToInvite;
- (id)body;
- (id)canEdit;
- (id)containerID;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubject:(id)arg1 body:(id)arg2 containerID:(id)arg3 canEdit:(id)arg4 allowOthersToInvite:(id)arg5 error:(id)arg6;
- (id)subject;

@end
