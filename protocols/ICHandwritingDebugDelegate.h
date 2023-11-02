
@protocol ICHandwritingDebugDelegate <NSObject>

@required

- (NSArray *)drawingsForHandwritingDebugWindow:(ICHandwritingDebugWindow *)arg1;
- (void)handwritingDebugWindowShouldClose:(ICHandwritingDebugWindow *)arg1;
- (NSString *)radarTitleForHandwritingDebugWindow:(ICHandwritingDebugWindow *)arg1;

@end
