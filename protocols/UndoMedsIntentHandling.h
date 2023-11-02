
@protocol UndoMedsIntentHandling <NSObject>

@required

- (void)handleUndoMeds:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: UndoMedsIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UndoMedsIntentResponse *, void*
- (void)handleUndoMeds:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: UndoMedsIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UndoMedsIntentResponse *, void*

@optional

- (void)confirmUndoMeds:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: UndoMedsIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UndoMedsIntentResponse *, void*
- (void)confirmUndoMeds:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: UndoMedsIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UndoMedsIntentResponse *, void*

@end
