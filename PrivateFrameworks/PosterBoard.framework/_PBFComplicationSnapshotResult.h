
@interface _PBFComplicationSnapshotResult : NSObject {
    NSError * _error;
    UIImage * _snapshot;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) UIImage *snapshot;

- (void).cxx_destruct;
- (id)error;
- (id)initWithSnapshot:(id)arg1 error:(id)arg2;
- (id)snapshot;

@end
