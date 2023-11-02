
@interface PRSPosterSnapshotCollection : NSObject <BSXPCSecureCoding> {
    long long  _accessibilityContrast;
    PRSPosterSnapshot * _floatingLayerSnapshot;
    long long  _interfaceOrientation;
    long long  _interfaceStyle;
    PRSPosterSnapshot * _primaryLayersSnapshot;
    FBSDisplayIdentity * _snapshotDisplayIdentity;
    double  _snapshotScale;
}

@property (nonatomic, readonly) long long accessibilityContrast;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PRSPosterSnapshot *floatingLayerSnapshot;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic, readonly) long long interfaceStyle;
@property (nonatomic, readonly) PRSPosterSnapshot *primaryLayersSnapshot;
@property (nonatomic, readonly) FBSDisplayIdentity *snapshotDisplayIdentity;
@property (nonatomic, readonly) double snapshotScale;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (bool)_populateInterfaceOrientationFromSurfacesIfPossible;
- (long long)accessibilityContrast;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)floatingLayerSnapshot;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithPrimaryLayersSnapshot:(id)arg1 floatingLayerSnapshot:(id)arg2 snapshotScale:(double)arg3 interfaceStyle:(long long)arg4 accessibilityContrast:(long long)arg5;
- (id)initWithPrimaryLayersSnapshot:(id)arg1 floatingLayerSnapshot:(id)arg2 snapshotScale:(double)arg3 interfaceStyle:(long long)arg4 accessibilityContrast:(long long)arg5 interfaceOrientation:(long long)arg6 displayIdentity:(id)arg7;
- (long long)interfaceOrientation;
- (long long)interfaceStyle;
- (id)primaryLayersSnapshot;
- (id)snapshotDisplayIdentity;
- (double)snapshotScale;

@end
