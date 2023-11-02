
@interface NSISPlaybackOperation : NSObject {
    NSMutableDictionary * oldIdentsToNewVariables;
    NSMutableArray * variableDelegates;
}

- (void)_addToEngine:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)playbackOneAction:(id)arg1 onEngine:(id)arg2;
- (id)unwrapLinearExpression:(id)arg1 onEngine:(id)arg2;
- (id)unwrapVariable:(id)arg1;

@end
