
@protocol BRCShareAcceptationFault

@required

- (void)deleteShareAcceptationFault;
- (void)markLiveFromStageAsShareAcceptationFault;
- (void)markNeedsTransformIntoNormalFault;
- (void)stageShareAcceptationFaultWithName:(NSString *)arg1;

@end
