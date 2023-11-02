
@interface GCDevicePhysicalInputDescription : NSObject <NSSecureCoding> {
    NSSet * _attributes;
    NSArray * _elements;
}

@property (nonatomic, copy) NSSet *attributes;
@property (nonatomic, copy) NSArray *elements;

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributes;
- (id)description;
- (id)elements;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)redactedDescription;
- (void)setAttributes:(id)arg1;
- (void)setElements:(id)arg1;
- (bool)validate:(out id*)arg1;

// Image: /System/Library/Frameworks/GameController.framework/GameController

+ (Class)facadeParametersClass;

- (id)makeFacadeParameters;

@end
