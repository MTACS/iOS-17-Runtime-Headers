
@protocol VCPMADTaskProtocol

@required

- (bool)autoCancellable;
- (void)cancel;
- (float)resourceRequirement;
- (int)run;

@optional

- (bool)cachesResources;
- (void)interrupt;
- (void)resetInterruption;

@end
