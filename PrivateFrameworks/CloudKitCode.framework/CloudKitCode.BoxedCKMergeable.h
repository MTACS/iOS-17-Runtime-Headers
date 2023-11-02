
@interface CloudKitCode.BoxedCKMergeable : NSObject <CKMergeable> {
    void mergeable;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (bool)mergeDeltas:(id)arg1 error:(id*)arg2;
- (id)mergeableDeltasForMetadata:(id)arg1 error:(id*)arg2;

@end
