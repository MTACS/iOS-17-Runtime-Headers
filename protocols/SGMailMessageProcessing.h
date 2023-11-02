
@protocol SGMailMessageProcessing <NSObject>

@required

- (void)dissectMailMessage:(SGSimpleMailMessage *)arg1 entity:(SGPipelineEntity *)arg2 context:(SGRequestContext *)arg3;

@end
