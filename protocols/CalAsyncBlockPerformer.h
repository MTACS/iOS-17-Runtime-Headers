
@protocol CalAsyncBlockPerformer

@required

- (<CalCancelable> *)performAfterDelay:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CalCancelable> *, void*
- (<CalCancelable> *)performAsync:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <CalCancelable> *, void*

@end
