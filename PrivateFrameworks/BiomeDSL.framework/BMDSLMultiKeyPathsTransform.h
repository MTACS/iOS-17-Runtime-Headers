
@interface BMDSLMultiKeyPathsTransform : BMDSLBaseCodable <BMDSLTransform> {
    NSArray * _keyPaths;
}

@property (nonatomic, readonly, copy) NSArray *keyPaths;

+ (bool)supportsSecureCoding;
+ (id)withKeyPaths:(id)arg1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPaths:(id)arg1;
- (id)initWithKeyPaths:(id)arg1 name:(id)arg2 version:(unsigned int)arg3;
- (id)keyPaths;
- (id)transformInput:(id)arg1 combinedState:(id)arg2;

@end
