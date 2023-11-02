
@interface MFDADeferredMessageMoveOperation : _MFOfflineCacheOperation {
    NSString * _destinationMailboxID;
    NSArray * _originalFlags;
    NSString * _sourceMailboxID;
    NSArray * _sourceRemoteIDs;
    NSArray * _temporaryRemoteIDs;
}

+ (id)log;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)translateToLocalActionWithConnection:(id)arg1;

@end
