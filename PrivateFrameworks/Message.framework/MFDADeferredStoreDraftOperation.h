
@interface MFDADeferredStoreDraftOperation : _MFOfflineCacheOperation {
    NSString * _folderID;
    NSString * _messageIDHeader;
}

+ (id)log;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessageIDHeader:(id)arg1 mailbox:(id)arg2;
- (bool)translateToLocalActionWithConnection:(id)arg1;

@end
