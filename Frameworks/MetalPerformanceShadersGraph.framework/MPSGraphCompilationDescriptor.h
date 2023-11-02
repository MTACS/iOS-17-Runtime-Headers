
@interface MPSGraphCompilationDescriptor : MPSGraphObject <NSCopying> {
    unsigned long long  _allowedComputeDevices;
    unsigned long long  _aneCompilerSpatialSplitting;
    id /* block */  _compilationCompletionHandler;
    unsigned long long  _compilerOptions;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _enableANEFWToFWSignal;
    bool  _enableANELateLatch;
    unsigned long long  _optimizationLevel;
    unsigned long long  _optimizationProfile;
    unsigned long long  _preferredDevice;
    bool  _printANEPlacementAnalysis;
    bool  _waitForCompilationCompletion;
}

@property (nonatomic) unsigned long long allowedComputeDevices;
@property unsigned long long aneCompilerSpatialSplitting;
@property (copy) id /* block */ compilationCompletionHandler;
@property unsigned long long compilerOptions;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property bool enableANEFWToFWSignal;
@property bool enableANELateLatch;
@property (nonatomic) unsigned long long optimizationLevel;
@property (nonatomic) unsigned long long optimizationProfile;
@property (nonatomic) unsigned long long preferredDevice;
@property bool printANEPlacementAnalysis;
@property (nonatomic) bool waitForCompilationCompletion;

- (void).cxx_destruct;
- (unsigned long long)allowedComputeDevices;
- (unsigned long long)aneCompilerSpatialSplitting;
- (id /* block */)compilationCompletionHandler;
- (unsigned long long)compilerOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)disableTypeInference;
- (id)dispatchQueue;
- (bool)enableANEFWToFWSignal;
- (bool)enableANELateLatch;
- (void)enableDevicePlacement;
- (void)enableFileBackedConstants;
- (struct vector<mlir::NamedAttribute, std::allocator<mlir::NamedAttribute>> { struct NamedAttribute {} *x1; struct NamedAttribute {} *x2; struct __compressed_pair<mlir::NamedAttribute *, std::allocator<mlir::NamedAttribute>> { struct NamedAttribute {} *x_3_1_1; } x3; })getNamedAttrArray:(void*)arg1 device:(id)arg2;
- (id)init;
- (bool)isEqualTo:(id)arg1;
- (unsigned long long)optimizationLevel;
- (unsigned long long)optimizationProfile;
- (unsigned long long)preferredDevice;
- (bool)printANEPlacementAnalysis;
- (void)setAllowedComputeDevices:(unsigned long long)arg1;
- (void)setAneCompilerSpatialSplitting:(unsigned long long)arg1;
- (void)setCompilationCompletionHandler:(id /* block */)arg1;
- (void)setCompilerOptions:(unsigned long long)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setEnableANEFWToFWSignal:(bool)arg1;
- (void)setEnableANELateLatch:(bool)arg1;
- (void)setOptimizationLevel:(unsigned long long)arg1;
- (void)setOptimizationProfile:(unsigned long long)arg1;
- (void)setPreferredDevice:(unsigned long long)arg1;
- (void)setPrintANEPlacementAnalysis:(bool)arg1;
- (void)setWaitForCompilationCompletion:(bool)arg1;
- (bool)waitForCompilationCompletion;

@end
