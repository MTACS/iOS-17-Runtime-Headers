
@interface WFHomeScreenIcon : NSObject {
    NSData * _customImageData;
    WFWorkflowIcon * _workflowIcon;
}

@property (nonatomic, readonly) NSData *customImageData;
@property (nonatomic, readonly) WFWorkflowIcon *workflowIcon;

- (void).cxx_destruct;
- (id)customImageData;
- (id)initWithWorkflowIcon:(id)arg1 customImageData:(id)arg2;
- (id)workflowIcon;

@end
