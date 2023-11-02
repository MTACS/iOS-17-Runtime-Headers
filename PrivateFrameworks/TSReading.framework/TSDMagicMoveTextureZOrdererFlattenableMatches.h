
@interface TSDMagicMoveTextureZOrdererFlattenableMatches : NSObject {
    NSArray * _animationMatches;
    NSArray * _texturesInZOrder;
}

@property (nonatomic, retain) NSArray *animationMatches;
@property (nonatomic, retain) NSArray *texturesInZOrder;

- (id)animationMatches;
- (void)dealloc;
- (void)setAnimationMatches:(id)arg1;
- (void)setTexturesInZOrder:(id)arg1;
- (id)texturesInZOrder;

@end
