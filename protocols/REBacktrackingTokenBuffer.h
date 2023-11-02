
@protocol REBacktrackingTokenBuffer <RETokenBuffer>

@required

- (void)consume;
- (void)pop;
- (void)push;

@end
