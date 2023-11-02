
@interface PRPosterSnapshotterResult : NSObject <BSInvalidatable, NSSecureCoding> {
    double  _executionTime;
    PRSPosterPath<BSInvalidatable> * _outputPath;
    PRPosterSnapshotRequest * _request;
    PRPosterSnapshotBundle * _snapshotBundle;
    PRPosterSnapshotBundleBuilder * _snapshotBundleBuilder;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double executionTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PRSPosterPath *outputPath;
@property (nonatomic, readonly) PRPosterSnapshotRequest *request;
@property (nonatomic, readonly) PRPosterSnapshotBundle *snapshotBundle;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_snapshotBundleURL;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (double)executionTime;
- (void)finalizeWithError:(out id*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(id)arg1 snapshotBundleBuilder:(id)arg2 executionTime:(double)arg3;
- (void)invalidate;
- (id)outputPath;
- (id)request;
- (id)snapshotBundle;

@end
