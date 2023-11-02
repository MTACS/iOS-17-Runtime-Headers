
@interface _SFModelProperties : NSObject <NSCopying, NSSecureCoding> {
    NSString * _modelQualityType;
    NSURL * _modelRoot;
    NSString * _modelVersion;
}

@property (nonatomic, readonly, copy) NSString *modelQualityType;
@property (nonatomic, readonly, copy) NSURL *modelRoot;
@property (nonatomic, readonly, copy) NSString *modelVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelRoot:(id)arg1 modelVersion:(id)arg2 modelQualityType:(id)arg3;
- (id)modelQualityType;
- (id)modelRoot;
- (id)modelVersion;

@end
