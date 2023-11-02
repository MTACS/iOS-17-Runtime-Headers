
@interface FPActionOperationInfo : NSObject <NSSecureCoding> {
    bool  __t_clearItemURLs;
    bool  __t_clientDrivenReader;
    unsigned long long  __t_moveQueueWidth;
    bool  _attachSandboxExtensionsOnXPCEncoding;
    NSString * _operationID;
    unsigned int  _qos;
    NSArray * _roots;
}

@property (nonatomic) bool _t_clearItemURLs;
@property (nonatomic) bool _t_clientDrivenReader;
@property (nonatomic) unsigned long long _t_moveQueueWidth;
@property (nonatomic) bool attachSandboxExtensionsOnXPCEncoding;
@property (nonatomic, copy) NSString *operationID;
@property (nonatomic) unsigned int qos;
@property (nonatomic, retain) NSArray *roots;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_t_clearItemURLs;
- (bool)_t_clientDrivenReader;
- (unsigned long long)_t_moveQueueWidth;
- (bool)attachSandboxExtensionsOnXPCEncoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperationID:(id)arg1 roots:(id)arg2;
- (id)operationID;
- (unsigned int)qos;
- (id)roots;
- (void)setAttachSandboxExtensionsOnXPCEncoding:(bool)arg1;
- (void)setOperationID:(id)arg1;
- (void)setQos:(unsigned int)arg1;
- (void)setRoots:(id)arg1;
- (void)set_t_clearItemURLs:(bool)arg1;
- (void)set_t_clientDrivenReader:(bool)arg1;
- (void)set_t_moveQueueWidth:(unsigned long long)arg1;

@end
