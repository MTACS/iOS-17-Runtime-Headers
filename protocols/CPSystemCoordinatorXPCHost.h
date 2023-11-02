
@protocol CPSystemCoordinatorXPCHost

@required

- (void)requestCurrentState:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CPSystemCoordinatorState *, void*
- (void)setConfiguration:(CPSystemCoordinatorConfiguration *)arg1;

@end
