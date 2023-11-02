
@interface HDUnresolvedReferenceSet : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _references;
    HDFHIRResourceObject * _resource;
}

@property (nonatomic, readonly, copy) NSSet *references;
@property (nonatomic, readonly) HDFHIRResourceObject *resource;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithReferences:(id)arg1 resource:(id)arg2;
- (id)references;
- (id)resource;

@end
