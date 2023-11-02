
@interface VNCreateFaceprintRequestConfiguration : VNImageBasedRequestConfiguration {
    bool  _forceFaceprintCreation;
}

@property bool forceFaceprintCreation;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)forceFaceprintCreation;
- (id)initWithRequestClass:(Class)arg1;
- (void)setForceFaceprintCreation:(bool)arg1;

@end
