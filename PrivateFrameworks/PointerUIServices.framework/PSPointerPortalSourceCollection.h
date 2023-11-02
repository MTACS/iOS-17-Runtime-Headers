
@interface PSPointerPortalSourceCollection : NSObject <NSCopying, NSSecureCoding> {
    PSPortalSource * _overlayEffectPortalSource;
    PSPortalSource * _pointerPortalSource;
    PSMatchMoveSource * _samplingMatchMoveSource;
    bool  _shouldBeInvalidatedIfPointerLeavesDisplay;
}

@property (nonatomic, readonly, copy) PSPortalSource *overlayEffectPortalSource;
@property (nonatomic, readonly, copy) PSPortalSource *pointerPortalSource;
@property (nonatomic, readonly, copy) PSMatchMoveSource *samplingMatchMoveSource;
@property (nonatomic) bool shouldBeInvalidatedIfPointerLeavesDisplay;
@property (nonatomic, readonly) unsigned int sourceContextID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPointerPortalSource:(id)arg1 overlayEffectPortalSource:(id)arg2 samplingMatchMoveSource:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)overlayEffectPortalSource;
- (id)pointerPortalSource;
- (id)samplingMatchMoveSource;
- (void)setShouldBeInvalidatedIfPointerLeavesDisplay:(bool)arg1;
- (bool)shouldBeInvalidatedIfPointerLeavesDisplay;
- (unsigned int)sourceContextID;

@end
