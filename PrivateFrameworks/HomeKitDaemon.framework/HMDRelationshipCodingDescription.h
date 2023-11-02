
@interface HMDRelationshipCodingDescription : HMDPropertyCodingDescription {
    bool  _parentChild;
}

@property (getter=isParentChild, readonly) bool parentChild;
@property (getter=isReference, readonly) bool reference;
@property (readonly) NSRelationshipDescription *relationship;

- (bool)isParentChild;
- (bool)isReference;
- (id)relationship;

@end
