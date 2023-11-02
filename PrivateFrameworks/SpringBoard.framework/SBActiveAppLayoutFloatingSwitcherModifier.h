
@interface SBActiveAppLayoutFloatingSwitcherModifier : SBSwitcherModifier {
    _SBActiveAppFloorFloatingSwitcherModifier * _floorModifier;
    SBStackedFloatingSwitcherModifier * _stackedModifier;
}

- (void).cxx_destruct;
- (id)initWithActiveAppLayout:(id)arg1 floatingConfiguration:(long long)arg2 environmentMode:(long long)arg3;

@end
