
@interface PSMatchMoveSource : NSObject <NSCopying, NSSecureCoding> {
    bool  _shouldBeInvalidatedIfPointerLeavesDisplay;
    unsigned int  _sourceContextID;
    unsigned long long  _sourceLayerRenderID;
}

@property (nonatomic) bool shouldBeInvalidatedIfPointerLeavesDisplay;
@property (nonatomic, readonly) unsigned int sourceContextID;
@property (nonatomic, readonly) unsigned long long sourceLayerRenderID;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceContextID:(unsigned int)arg1 sourceLayerRenderID:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)setShouldBeInvalidatedIfPointerLeavesDisplay:(bool)arg1;
- (bool)shouldBeInvalidatedIfPointerLeavesDisplay;
- (unsigned int)sourceContextID;
- (unsigned long long)sourceLayerRenderID;

@end
