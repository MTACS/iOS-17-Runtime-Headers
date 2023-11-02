
@interface PRSPosterSnapshotRequest : NSObject <BSXPCSecureCoding> {
    double  _imageScaleRelativeToScreen;
    long long  _orientation;
    PRSServerPosterPath * _path;
    NSDictionary * _requestOptions;
}

@property (nonatomic, readonly) long long configurationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double imageScaleRelativeToScreen;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) long long orientation;
@property (nonatomic, readonly) PRSServerPosterPath *path;
@property (nonatomic, readonly, copy) NSDictionary *requestOptions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long variantType;

+ (id)contaminateRequestOptions:(id)arg1;
+ (id)sanitizeRequestOptions:(id)arg1;
+ (bool)supportsBSXPCSecureCoding;
+ (id)validOptions;

- (void).cxx_destruct;
- (bool)_validateRequestOptionsOrAbort:(bool)arg1;
- (long long)configurationType;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (double)imageScaleRelativeToScreen;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 variantType:(long long)arg2 options:(unsigned long long)arg3;
- (id)initWithConfiguration:(id)arg1 variantType:(long long)arg2 options:(unsigned long long)arg3 orientation:(long long)arg4;
- (id)initWithConfigurationType:(long long)arg1 variantType:(long long)arg2 options:(unsigned long long)arg3;
- (id)initWithConfigurationType:(long long)arg1 variantType:(long long)arg2 options:(unsigned long long)arg3 orientation:(long long)arg4;
- (id)initWithFocusModeUUID:(id)arg1 configurationType:(long long)arg2 variant:(long long)arg3 options:(unsigned long long)arg4 maxCount:(unsigned long long)arg5;
- (id)initWithFocusModeUUID:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)initWithFocusPosterRequest:(id)arg1;
- (id)initWithPath:(id)arg1 requestOptions:(id)arg2;
- (unsigned long long)maxCount;
- (unsigned long long)options;
- (long long)orientation;
- (id)path;
- (id)requestOptions;
- (void)setImageScaleRelativeToScreen:(double)arg1;
- (long long)variantType;

@end
