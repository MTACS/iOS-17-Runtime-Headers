
@protocol BFFFaceIDViewControllerDelegate

@required

- (void)faceIDViewController:(BFFFaceIDViewController *)arg1 didCompleteWithResult:(unsigned long long)arg2 pushedViewControllers:(NSArray *)arg3;
- (NSString *)passcodeForFaceIDViewController:(BFFFaceIDViewController *)arg1;

@end
