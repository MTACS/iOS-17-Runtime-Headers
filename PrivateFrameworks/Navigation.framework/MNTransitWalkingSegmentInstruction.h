
@interface MNTransitWalkingSegmentInstruction : MNTransitInstruction {
    GEOComposedWalkingRouteSegment * _walkingSegment;
}

@property (nonatomic, readonly) GEOComposedWalkingRouteSegment *walkingSegment;

+ (id)instructionForWalkingSegment:(id)arg1 context:(long long)arg2;

- (void).cxx_destruct;
- (id)initWithWalkingSegment:(id)arg1 context:(long long)arg2;
- (id)instructionSet;
- (id)overridenInstructionsMapping;
- (id)walkingSegment;

@end
