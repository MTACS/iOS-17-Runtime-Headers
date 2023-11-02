
@interface _MFOfflineCacheOperation : NSObject <NSSecureCoding>

+ (bool)supportsSecureCoding;

- (bool)databaseID:(id*)arg1 andMailbox:(id*)arg2 forMessageWithRemoteID:(id)arg3 connection:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)translateToLocalActionWithConnection:(id)arg1;

@end
