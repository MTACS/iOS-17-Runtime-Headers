
@interface WebVisiblePosition : NSObject {
    struct WebObjectInternal { } * _internal;
}

@property (nonatomic) unsigned long long affinity;

+ (id)_wrapVisiblePosition:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> { struct Node {} *x_1_2_1; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; bool x2; })arg1;
+ (id)_wrapVisiblePositionIfValid:(struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> { struct Node {} *x_1_2_1; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; bool x2; })arg1;

- (struct VisiblePosition { struct Position { struct RefPtr<WebCore::Node, WTF::RawPtrTraits<WebCore::Node>, WTF::DefaultRefDerefTraits<WebCore::Node>> { struct Node {} *x_1_2_1; } x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3 : 3; unsigned int x_1_1_4 : 1; } x1; bool x2; })_visiblePosition;
- (unsigned long long)affinity;
- (bool)atAlphaNumericBoundaryInDirection:(int)arg1;
- (bool)atBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (bool)directionIsDownstream:(int)arg1;
- (int)distanceFromPosition:(id)arg1;
- (id)enclosingRangeWithCorrectionIndicator;
- (id)enclosingRangeWithDictationPhraseAlternatives:(id*)arg1;
- (id)enclosingTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2;
- (bool)isEditable;
- (bool)isEqual:(id)arg1;
- (id)positionAtStartOrEndOfWord;
- (id)positionByMovingInDirection:(int)arg1 amount:(unsigned int)arg2;
- (id)positionByMovingInDirection:(int)arg1 amount:(unsigned int)arg2 withAffinityDownstream:(bool)arg3;
- (id)positionOfNextBoundaryOfGranularity:(int)arg1 inDirection:(int)arg2;
- (bool)requiresContextForWordBoundary;
- (void)setAffinity:(unsigned long long)arg1;
- (bool)textDirection;
- (bool)withinTextUnitOfGranularity:(int)arg1 inDirectionIfAtBoundary:(int)arg2;

@end
