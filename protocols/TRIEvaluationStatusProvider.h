
@protocol TRIEvaluationStatusProvider

@required

- (bool)enumerateActiveBMLTWithError:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 9: id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TRIClientBackgroundMLTask *, TRIFactorsState *, bool*, void*
- (bool)enumerateActiveEvaluationsForMLRuntimeWithError:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 9: id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TRIMLRuntimeEvaluation *, TRIFactorsState *, bool*, void*
- (TRIEvaluationStatusCursor *)enumerateStatusOfEvaluationsForMLRuntimeWithCursor:(void *)arg1 error:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 10: TRIEvaluationStatusCursor *, id*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TRIMLRuntimeEvaluation *, TRIEvaluationStatus *, bool*, void*

@end
