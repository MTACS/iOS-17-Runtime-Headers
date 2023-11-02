
@interface NTKArgonExtractorOperation : NSObject {
    NTKArgonKeyDescriptor * _keyDescriptor;
    long long  _operationType;
}

@property (nonatomic, readonly) NTKArgonKeyDescriptor *keyDescriptor;
@property (nonatomic, readonly) long long operationType;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithKeyDescriptor:(id)arg1 operationType:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)keyDescriptor;
- (long long)operationType;

@end
