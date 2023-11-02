
@interface TRAArbitrationDeviceOrientationInputs : NSObject <BSDescriptionProviding, NSCopying> {
    long long  _currentDeviceOrientation;
    long long  _nonFlatDeviceOrientation;
}

@property (nonatomic, readonly) long long currentDeviceOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long nonFlatDeviceOrientation;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)currentDeviceOrientation;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithCurrentDeviceOrientation:(long long)arg1 nonFlatDeviceOrientation:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDeviceOrientationInputs:(id)arg1;
- (long long)nonFlatDeviceOrientation;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
