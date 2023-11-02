
@interface CRBlockOutputRegion : CRCompositeOutputRegion <CRLayoutBlockRegion> {
    bool  _canWrapToNextBlock;
}

@property (readonly) CRNormalizedQuad *boundingQuad;
@property bool canWrapToNextBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long layoutDirection;
@property (readonly) NSArray *layoutLines;
@property (readonly) Class superclass;
@property (readonly) NSUUID *uuid;

+ (id)blockWithBlock:(id)arg1 children:(id)arg2;
+ (id)blockWithLines:(id)arg1 confidence:(int)arg2 quad:(id)arg3 baselineAngle:(double)arg4;

- (bool)canWrapToNextBlock;
- (bool)computesNumberOfLinesFromChildren;
- (id)joiningDelimiter;
- (id)layoutLines;
- (id)regionsSuitableForDataDetectorOutput;
- (void)removeLine:(id)arg1;
- (void)setCanWrapToNextBlock:(bool)arg1;
- (unsigned long long)type;

@end
