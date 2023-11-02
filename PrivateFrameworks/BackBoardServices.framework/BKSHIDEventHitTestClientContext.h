
@interface BKSHIDEventHitTestClientContext : NSObject <BSProtobufSerializable, BSXPCSecureCoding> {
    unsigned int  _contextID;
    int  _pid;
}

@property (nonatomic) unsigned int contextID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int pid;
@property (readonly) Class superclass;

+ (id)protobufSchema;
+ (bool)supportsBSXPCSecureCoding;

- (unsigned int)contextID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)pid;
- (void)setContextID:(unsigned int)arg1;
- (void)setPid:(int)arg1;

@end
