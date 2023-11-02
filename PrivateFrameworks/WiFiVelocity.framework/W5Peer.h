
@interface W5Peer : NSObject <NSCopying, NSSecureCoding> {
    NSString * _build;
    NSString * _model;
    NSString * _name;
    bool  _nearby;
    NSString * _os;
    NSString * _peerID;
    NSString * _version;
}

@property (nonatomic, copy) NSString *build;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) bool nearby;
@property (nonatomic, copy) NSString *os;
@property (nonatomic, copy) NSString *peerID;
@property (nonatomic, readonly) long long type;
@property (nonatomic, copy) NSString *version;

+ (bool)supportsSecureCoding;

- (id)build;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPeer:(id)arg1;
- (id)model;
- (id)name;
- (bool)nearby;
- (id)os;
- (id)peerID;
- (void)setBuild:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNearby:(bool)arg1;
- (void)setOs:(id)arg1;
- (void)setPeerID:(id)arg1;
- (void)setVersion:(id)arg1;
- (long long)type;
- (id)version;

@end
