
@interface CDPCombinedWalrusStatus : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _escrowWalrusStatus;
    unsigned long long  _octagonWalrusStatus;
    unsigned long long  _pcsWalrusStatus;
}

@property (nonatomic) unsigned long long escrowWalrusStatus;
@property (nonatomic) unsigned long long octagonWalrusStatus;
@property (nonatomic) unsigned long long pcsWalrusStatus;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)escrowWalrusStatus;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)octagonWalrusStatus;
- (unsigned long long)pcsWalrusStatus;
- (void)setEscrowWalrusStatus:(unsigned long long)arg1;
- (void)setOctagonWalrusStatus:(unsigned long long)arg1;
- (void)setPcsWalrusStatus:(unsigned long long)arg1;

@end
