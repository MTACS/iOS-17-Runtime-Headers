
@interface RBSAssertionIdentifier : NSObject <NSCopying, RBSXPCSecureCoding> {
    int  _clientPid;
    unsigned long long  _count;
    NSString * _desc;
    unsigned long long  _hash;
    int  _serverPid;
}

@property (nonatomic, readonly) int clientPid;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int serverPid;
@property (readonly) Class superclass;

+ (id)identifierWithClientPid:(int)arg1;
+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (int)clientPid;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)serverPid;

@end
