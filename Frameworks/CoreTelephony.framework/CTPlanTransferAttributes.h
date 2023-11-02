
@interface CTPlanTransferAttributes : NSObject <NSSecureCoding> {
    bool  _isSecuredFlow;
    unsigned long long  _transferCapability;
    NSString * _transferEndpoint;
    unsigned long long  _transferStatus;
}

@property (nonatomic) bool isSecuredFlow;
@property (nonatomic) unsigned long long transferCapability;
@property (nonatomic, retain) NSString *transferEndpoint;
@property (nonatomic) unsigned long long transferStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransferCapability:(unsigned long long)arg1 transferStatus:(unsigned long long)arg2 isSecuredFlow:(bool)arg3 transferEndpoint:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isSecuredFlow;
- (void)setIsSecuredFlow:(bool)arg1;
- (void)setTransferCapability:(unsigned long long)arg1;
- (void)setTransferEndpoint:(id)arg1;
- (void)setTransferStatus:(unsigned long long)arg1;
- (unsigned long long)transferCapability;
- (id)transferEndpoint;
- (unsigned long long)transferStatus;

@end
