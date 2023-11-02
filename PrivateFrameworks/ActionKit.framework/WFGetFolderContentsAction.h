
@interface WFGetFolderContentsAction : WFAction

+ (id)contentsOfDirectory:(id)arg1 includingSubfolders:(bool)arg2 error:(id*)arg3;

- (id)contentDestinationWithError:(id*)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end
