
@interface SFRSA_PSSSigningOperation : SFRSASigningOperation {
    id  _pssSigningOperationInternal;
}

@property (nonatomic, copy) <SFMaskGenerationFunction> *maskGenerationFunction;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2;
- (id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2 maskGenerationFunction:(id)arg3;
- (id)maskGenerationFunction;
- (void)setMaskGenerationFunction:(id)arg1;

@end
