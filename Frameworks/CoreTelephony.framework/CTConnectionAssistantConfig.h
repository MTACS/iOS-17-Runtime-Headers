
@interface CTConnectionAssistantConfig : NSObject <NSCopying, NSSecureCoding> {
    CTCAModelVector * _modelVector;
}

@property (nonatomic, retain) CTCAModelVector *modelVector;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)modelVector;
- (void)setModelVector:(id)arg1;

@end
