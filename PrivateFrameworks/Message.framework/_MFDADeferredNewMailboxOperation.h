
@interface _MFDADeferredNewMailboxOperation : _MFOfflineCacheOperation {
    NSString * _displayName;
    NSString * _parentFolderID;
    NSString * _temporaryFolderID;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)translateToLocalActionWithConnection:(id)arg1;

@end
