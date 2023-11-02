
@interface SLShareableContentInitiatorRequest : NSObject <BSXPCSecureCoding, NSSecureCoding> {
    _SWCollaborationMetadata * _collaborationMetadata;
    CKContainerSetupInfo * _containerSetupInfo;
    NSURL * _fileURL;
}

@property (nonatomic, readonly) _SWCollaborationMetadata *collaborationMetadata;
@property (nonatomic, readonly) CKContainerSetupInfo *containerSetupInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)collaborationMetadata;
- (id)containerSetupInfo;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollaborationMetadata:(id)arg1;
- (id)initWithContainerSetupInfo:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 containerSetupInfo:(id)arg2 collaborationMetadata:(id)arg3;

@end
