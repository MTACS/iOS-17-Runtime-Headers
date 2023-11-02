
@interface RBSHandshakeRequest : NSObject <RBSXPCSecureCoding> {
    NSSet * _assertionDescriptors;
    unsigned int  _auid;
    unsigned int  _euid;
    NSArray * _savedEndowments;
}

@property (nonatomic, retain) NSSet *assertionDescriptors;
@property (nonatomic) unsigned int auid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int euid;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *savedEndowments;
@property (readonly) Class superclass;

+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)assertionDescriptors;
- (unsigned int)auid;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned int)euid;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)savedEndowments;
- (void)setAssertionDescriptors:(id)arg1;
- (void)setAuid:(unsigned int)arg1;
- (void)setEuid:(unsigned int)arg1;
- (void)setSavedEndowments:(id)arg1;

@end
