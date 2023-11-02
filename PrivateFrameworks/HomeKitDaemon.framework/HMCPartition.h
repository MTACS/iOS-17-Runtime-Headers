
@interface HMCPartition : HMFObject {
    HMCRedirector * _redirections;
}

@property (readonly) HMCRedirector *redirections;

- (void).cxx_destruct;
- (id)init;
- (bool)modelBelongsToThisPartition:(id)arg1;
- (id)redirections;

@end
