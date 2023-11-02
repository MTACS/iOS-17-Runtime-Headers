
@protocol PKTextInputRecognitionManagerDataSource <NSObject>

@required

- (void)recognitionManager:(void *)arg1 fetchContentInfoForTextInputTarget:(void *)arg2 strokeIdentifiers:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: PKTextInputRecognitionManager *, CHTextInputTarget *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CHTextInputTargetContentInfo *, void*
- (void)recognitionManager:(PKTextInputRecognitionManager *)arg1 recognitionDidFinishWithQueryItems:(NSArray *)arg2 duration:(double)arg3;
- (CHTextInputTarget *)recognitionManager:(PKTextInputRecognitionManager *)arg1 textInputTargetForItemStableIdentifier:(NSNumber *)arg2 strokeIdentifiers:(NSSet *)arg3 simultaneousItemStableIdentifiers:(NSArray *)arg4;
- (PKTextInputStrokeProvider *)recognitionManagerStrokeProvider:(PKTextInputRecognitionManager *)arg1;
- (NSArray *)recognitionManagerTextInputTargets:(PKTextInputRecognitionManager *)arg1;

@end
