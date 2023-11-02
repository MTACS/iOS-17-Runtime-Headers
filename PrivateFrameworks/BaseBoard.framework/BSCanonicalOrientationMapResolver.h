
@interface BSCanonicalOrientationMapResolver : NSObject <BSInterfaceOrientationMapResolving, BSXPCSecureCoding> {
    long long  _currentOrientation;
    long long  _targetOrientation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (id)debugDescription;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithTargetOrientation:(long long)arg1 currentOrientation:(long long)arg2;
- (long long)interfaceOrientationForSupportedOrientations:(unsigned long long)arg1 preferredOrientation:(long long)arg2;
- (bool)isEqual:(id)arg1;

@end
