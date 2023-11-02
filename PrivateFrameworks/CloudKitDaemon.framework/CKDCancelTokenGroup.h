
@interface CKDCancelTokenGroup : NSObject <CKDCancelling> {
    NSMutableArray * _cancelTokens;
}

@property (nonatomic, retain) NSMutableArray *cancelTokens;

- (void).cxx_destruct;
- (void)addCancelToken:(id)arg1 withOperation:(id)arg2;
- (void)cancel;
- (id)cancelTokens;
- (id)init;
- (void)removeAllCancelTokens;
- (void)removeCancelToken:(id)arg1;
- (void)setCancelTokens:(id)arg1;

@end
