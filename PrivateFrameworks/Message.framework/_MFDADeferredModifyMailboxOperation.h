
@interface _MFDADeferredModifyMailboxOperation : _MFOfflineCacheOperation {
    NSString * _folderID;
    NSString * _newDisplayName;
    NSString * _newParentFolderID;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFolderID:(id)arg1 newParentFolderID:(id)arg2 newDisplayName:(id)arg3;
- (bool)translateToLocalActionWithConnection:(id)arg1;

@end
