
@protocol SGTextMessageProcessing <NSObject>

@required

- (void)dissectTextMessage:(SGTextMessage *)arg1 entity:(SGPipelineEntity *)arg2 context:(SGRequestContext *)arg3;

@end
