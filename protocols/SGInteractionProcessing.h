
@protocol SGInteractionProcessing <NSObject>

@required

- (void)dissectInteraction:(INInteraction *)arg1 entity:(SGPipelineEntity *)arg2 context:(SGRequestContext *)arg3;

@end
