
@interface WLItemSizeConfirmationCompletionAdapter : NSObject {
    id /* block */  _completion;
    id /* block */  _segmentCompletion;
}

@property (nonatomic, readonly) id /* block */ completion;
@property (nonatomic, readonly) id /* block */ segmentCompletion;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)initWithUnconfirmedItemSize:(unsigned long long)arg1 segmentSize:(unsigned long long)arg2 originalSegmentCompletion:(id /* block */)arg3 originalCompletion:(id /* block */)arg4;
- (id /* block */)segmentCompletion;

@end
