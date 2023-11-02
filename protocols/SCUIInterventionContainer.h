
@protocol SCUIInterventionContainer <NSObject>

@required

- (NSDictionary *)contextDictionary;
- (<SCUIInterventionViewControllerDelegate> *)interventionDelegate;
- (void)setInterventionDelegate:(id <SCUIInterventionViewControllerDelegate>)arg1;
- (long long)workflow;

@end
