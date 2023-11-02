
@interface SGEntityMatchingTransformer : NSObject <PMLTransformerProtocol> {
    NSString * _addressMapping;
    NSString * _dateMapping;
    NSString * _emailMapping;
    NSString * _phoneMapping;
    NSString * _targetMapping;
}

@property (retain) NSString *addressMapping;
@property (retain) NSString *dateMapping;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *emailMapping;
@property (readonly) unsigned long long hash;
@property (retain) NSString *phoneMapping;
@property (readonly) Class superclass;
@property (retain) NSString *targetMapping;

+ (id)withTargetMapping:(id)arg1 phoneMapping:(id)arg2 emailMapping:(id)arg3 addressMapping:(id)arg4 andDateMapping:(id)arg5;

- (void).cxx_destruct;
- (id)addressMapping;
- (id)dateMapping;
- (id)emailMapping;
- (id)extendMatchArray:(id)arg1 withTarget:(id)arg2;
- (unsigned long long)hash;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithTargetMapping:(id)arg1 phoneMapping:(id)arg2 emailMapping:(id)arg3 addressMapping:(id)arg4 andDateMapping:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEntityMatchingTransformer:(id)arg1;
- (id)phoneMapping;
- (void)setAddressMapping:(id)arg1;
- (void)setDateMapping:(id)arg1;
- (void)setEmailMapping:(id)arg1;
- (void)setPhoneMapping:(id)arg1;
- (void)setTargetMapping:(id)arg1;
- (id)targetMapping;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;

@end
