
@interface AVTAvatarPuppetRecord : NSObject <AVTAvatarRecordInternal> {
    NSString * _puppetName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEditable, nonatomic, readonly) bool editable;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *puppetName;
@property (readonly) Class superclass;

+ (id /* block */)matchingIdentifierTest:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithPuppetName:(id)arg1;
- (bool)isEditable;
- (bool)isEqual:(id)arg1;
- (bool)isPuppet;
- (id)puppetName;

@end
