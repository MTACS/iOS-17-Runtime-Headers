
@interface WLKCanonicalContainerRequestOperation : WLKCanonicalPlayablesRequestOperation {
    WLKCanonicalContainerResponse * _containerResponse;
}

@property (nonatomic, readonly) WLKCanonicalContainerResponse *containerResponse;

- (void).cxx_destruct;
- (id)containerResponse;
- (void)processResponse;

@end
