
@interface TSDMagicMoveMatch : NSObject <TSDMatchingAlgorithmMatch> {
    double  _attributeMatchPercent;
    double  _distance;
    TSDMagicMoveMatchObject * _incomingObject;
    bool  _isShapeMatchOnlyWithoutText;
    long long  _matchCost;
    long long  _matchType;
    NSString * _name;
    TSDMagicMoveMatchObject * _outgoingObject;
    TSDTextureDescription * _textureDescription;
    double  _zOrderDistance;
}

@property (nonatomic) double attributeMatchPercent;
@property (nonatomic) double distance;
@property (nonatomic, readonly) id incomingMatchObject;
@property (nonatomic, readonly) TSDMagicMoveMatchObject *incomingObject;
@property (nonatomic) bool isShapeMatchOnlyWithoutText;
@property (nonatomic, readonly) bool isTextMatch;
@property (nonatomic, readonly) long long matchCost;
@property (nonatomic) long long matchType;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) id outgoingMatchObject;
@property (nonatomic, readonly) TSDMagicMoveMatchObject *outgoingObject;
@property (nonatomic, retain) TSDTextureDescription *textureDescription;
@property (nonatomic) double zOrderDistance;

+ (id)matchWithOutgoingObject:(id)arg1 incomingObject:(id)arg2 matchType:(long long)arg3 attributeMatchPercent:(double)arg4 textureDescription:(id)arg5;

- (double)attributeMatchPercent;
- (bool)conflictsWithMatch:(id)arg1;
- (void)dealloc;
- (id)description;
- (double)distance;
- (id)incomingMatchObject;
- (id)incomingObject;
- (bool)isShapeMatchOnlyWithoutText;
- (bool)isTextMatch;
- (long long)matchCost;
- (long long)matchType;
- (id)name;
- (id)outgoingMatchObject;
- (id)outgoingObject;
- (void)p_updateMagicMoveCost;
- (void)setAttributeMatchPercent:(double)arg1;
- (void)setDistance:(double)arg1;
- (void)setIsShapeMatchOnlyWithoutText:(bool)arg1;
- (void)setMatchType:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setTextureDescription:(id)arg1;
- (void)setZOrderDistance:(double)arg1;
- (id)textureDescription;
- (double)zOrderDistance;

@end
