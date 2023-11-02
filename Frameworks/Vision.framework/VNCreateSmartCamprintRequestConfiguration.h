
@interface VNCreateSmartCamprintRequestConfiguration : VNImageBasedRequestConfiguration {
    bool  _returnAllResults;
}

@property (nonatomic) bool returnAllResults;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRequestClass:(Class)arg1;
- (bool)returnAllResults;
- (void)setReturnAllResults:(bool)arg1;

@end
