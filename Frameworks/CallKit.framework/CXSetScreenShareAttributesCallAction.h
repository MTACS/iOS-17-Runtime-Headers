
@interface CXSetScreenShareAttributesCallAction : CXCallAction {
    CXScreenShareAttributes * _attributes;
}

@property (nonatomic, retain) CXScreenShareAttributes *attributes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributes;
- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCallUUID:(id)arg1 attributes:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setAttributes:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
