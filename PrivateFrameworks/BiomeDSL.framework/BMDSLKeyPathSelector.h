
@interface BMDSLKeyPathSelector : BMDSLBaseCodable <BMDSLArgumentSelector> {
    NSArray * _keyPaths;
}

@property (nonatomic, readonly, copy) NSArray *keyPaths;

+ (bool)supportsSecureCoding;
+ (id)withKeyPaths:(id)arg1;

- (void).cxx_destruct;
- (id)argumentsFromInput:(id)arg1 combinedState:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPaths:(id)arg1;
- (id)initWithName:(id)arg1 version:(unsigned int)arg2 keyPaths:(id)arg3;
- (id)keyPaths;

@end
