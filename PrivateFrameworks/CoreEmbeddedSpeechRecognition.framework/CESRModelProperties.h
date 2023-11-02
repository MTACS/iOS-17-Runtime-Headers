
@interface CESRModelProperties : NSObject <NSCopying, NSSecureCoding> {
    NSString * _modelRoot;
    NSString * _modelType;
    NSString * _modelVersion;
}

@property (nonatomic, readonly, copy) NSString *modelRoot;
@property (nonatomic, readonly, copy) NSString *modelType;
@property (nonatomic, readonly, copy) NSString *modelVersion;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelVersion:(id)arg1 modelType:(id)arg2 modelRoot:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)modelRoot;
- (id)modelType;
- (id)modelVersion;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;

@end
