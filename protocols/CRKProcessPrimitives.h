
@protocol CRKProcessPrimitives

@required

- (bool)processExistsWithIdentifier:(int)arg1;
- (<CRKCancelable> *)subscribeToExitForProcessWithIdentifier:(void *)arg1 exitHandler:(void *)arg2; // needs 2 arg types, found 6: int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
