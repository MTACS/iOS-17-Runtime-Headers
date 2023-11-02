
@interface AFPeerContentTuple : NSObject <NSCopying, NSSecureCoding> {
    id  _content;
    AFPeerInfo * _info;
}

@property (nonatomic, readonly, copy) id content;
@property (nonatomic, readonly, copy) AFPeerInfo *info;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)info;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfo:(id)arg1 content:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
