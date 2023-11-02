
@interface SBContinuousExposeAutoLayoutItem : NSObject <NSCopying, NSMutableCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPosition;
    struct CGPoint { 
        double x; 
        double y; 
    }  _compactedPosition;
    SBDisplayItem * _displayItem;
    bool  _fullyOccluded;
    bool  _inDefaultPosition;
    bool  _overlapped;
    bool  _partiallyCoveredByPeekingItem;
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    struct CGPoint { 
        double x; 
        double y; 
    }  _unoccludedPeekingPosition;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPosition;
@property (nonatomic) struct CGPoint { double x1; double x2; } compactedPosition;
@property (nonatomic, readonly) SBDisplayItem *displayItem;
@property (getter=isFullyOccluded, nonatomic) bool fullyOccluded;
@property (getter=isInDefaultPosition, nonatomic) bool inDefaultPosition;
@property (getter=isOverlapped, nonatomic) bool overlapped;
@property (getter=isPartiallyCoveredByPeekingItem, nonatomic) bool partiallyCoveredByPeekingItem;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) struct CGPoint { double x1; double x2; } unoccludedPeekingPosition;

- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1;
- (struct CGPoint { double x1; double x2; })anchorPosition;
- (struct CGPoint { double x1; double x2; })compactedPosition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayItem;
- (unsigned long long)hash;
- (id)initWithDisplayItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFullyOccluded;
- (bool)isInDefaultPosition;
- (bool)isOverlapped;
- (bool)isPartiallyCoveredByPeekingItem;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { double x1; double x2; })position;
- (void)setAnchorPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCompactedPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFullyOccluded:(bool)arg1;
- (void)setInDefaultPosition:(bool)arg1;
- (void)setOverlapped:(bool)arg1;
- (void)setPartiallyCoveredByPeekingItem:(bool)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUnoccludedPeekingPosition:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (struct CGPoint { double x1; double x2; })unoccludedPeekingPosition;

@end
