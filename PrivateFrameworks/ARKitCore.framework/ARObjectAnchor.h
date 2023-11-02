
@interface ARObjectAnchor : ARAnchor {
    ARReferenceObject * _referenceObject;
}

@property (nonatomic, readonly) ARReferenceObject *referenceObject;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAnchor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReferenceObject:(id)arg1 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)name;
- (id)referenceObject;

@end
