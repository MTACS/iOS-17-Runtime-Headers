
@interface PRCollaborationData : NSObject <NSCopying, NSSecureCoding> {
    NSData * _data;
    PRPeer * _sendingPeer;
}

@property (readonly) NSData *data;
@property (readonly) PRPeer *sendingPeer;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 sendingPeer:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)sendingPeer;

@end
