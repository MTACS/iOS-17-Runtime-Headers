
@interface SBDisplayItemLayoutAttributes : NSObject <NSCopying> {
    struct SBDisplayItemAttributedSize { 
        struct CGSize { 
            double width; 
            double height; 
        } _private_opaqueSize; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } referenceBounds; 
        long long semanticSizeType; 
    }  _attributedSize;
    struct SBDisplayItemAttributedSize { 
        struct CGSize { 
            double width; 
            double height; 
        } _private_opaqueSize; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } referenceBounds; 
        long long semanticSizeType; 
    }  _attributedUserSizeBeforeOverlapping;
    long long  _contentOrientation;
    unsigned long long  _hash;
    long long  _lastInteractionTime;
    struct CGPoint { 
        double x; 
        double y; 
    }  _normalizedCenter;
    long long  _occlusionState;
    bool  _positionIsSystemManaged;
    long long  _sizingPolicy;
    struct CGPoint { 
        double x; 
        double y; 
    }  _unoccludedPeekingCenter;
}

@property (nonatomic, readonly) struct SBDisplayItemAttributedSize { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; long long x3; } attributedSize;
@property (nonatomic, readonly) struct SBDisplayItemAttributedSize { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; long long x3; } attributedUserSizeBeforeOverlapping;
@property (nonatomic, readonly) long long contentOrientation;
@property (nonatomic, readonly) long long lastInteractionTime;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } normalizedCenter;
@property (nonatomic, readonly) long long occlusionState;
@property (getter=isPositionSystemManaged, nonatomic, readonly) bool positionIsSystemManaged;
@property (nonatomic, readonly) long long sizingPolicy;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } unoccludedPeekingCenter;

+ (id)layoutAttributesWithProtobufRepresentation:(id)arg1;
+ (struct CGPoint { double x1; double x2; })normalizedPointForPoint:(struct CGPoint { double x1; double x2; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

- (struct CGSize { double x1; double x2; })_sizeForAttributedSize:(struct SBDisplayItemAttributedSize { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; long long x3; })arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 defaultSize:(struct CGSize { double x1; double x2; })arg3 screenEdgePadding:(double)arg4;
- (struct SBDisplayItemAttributedSize { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; long long x3; })attributedSize;
- (struct SBDisplayItemAttributedSize { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; long long x3; })attributedUserSizeBeforeOverlapping;
- (id)attributesByModifyingAttributedSize:(struct SBDisplayItemAttributedSize { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; long long x3; })arg1;
- (id)attributesByModifyingAttributedUserSizeBeforeOverlapping:(struct SBDisplayItemAttributedSize { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; long long x3; })arg1;
- (id)attributesByModifyingContentOrientation:(long long)arg1;
- (id)attributesByModifyingLastInteractionTime:(long long)arg1;
- (id)attributesByModifyingNormalizedCenter:(struct CGPoint { double x1; double x2; })arg1;
- (id)attributesByModifyingOcclusionState:(long long)arg1;
- (id)attributesByModifyingPositionIsSystemManaged:(bool)arg1;
- (id)attributesByModifyingSizingPolicy:(long long)arg1;
- (id)attributesByModifyingUnoccludedPeekingCenter:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })centerInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)contentOrientation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContentOrientation:(long long)arg1 lastInteractionTime:(long long)arg2 sizingPolicy:(long long)arg3 attributedSize:(struct SBDisplayItemAttributedSize { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; long long x3; })arg4 normalizedCenter:(struct CGPoint { double x1; double x2; })arg5;
- (id)initWithContentOrientation:(long long)arg1 lastInteractionTime:(long long)arg2 sizingPolicy:(long long)arg3 attributedSize:(struct SBDisplayItemAttributedSize { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; long long x3; })arg4 normalizedCenter:(struct CGPoint { double x1; double x2; })arg5 occlusionState:(long long)arg6 attributedUserSizeBeforeOverlapping:(struct SBDisplayItemAttributedSize { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; long long x3; })arg7 unoccludedPeekingCenter:(struct CGPoint { double x1; double x2; })arg8 positionIsSystemManaged:(bool)arg9;
- (id)initWithPlistRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPositionSystemManaged;
- (long long)lastInteractionTime;
- (struct CGPoint { double x1; double x2; })normalizedCenter;
- (long long)occlusionState;
- (id)plistRepresentation;
- (id)protobufRepresentation;
- (struct CGSize { double x1; double x2; })sizeInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 defaultSize:(struct CGSize { double x1; double x2; })arg2 screenEdgePadding:(double)arg3;
- (long long)sizingPolicy;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (struct CGPoint { double x1; double x2; })unoccludedPeekingCenter;
- (struct CGSize { double x1; double x2; })userSizeBeforeOverlappingInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 defaultSize:(struct CGSize { double x1; double x2; })arg2 screenEdgePadding:(double)arg3;

@end
