
@interface FCAssetHandleDownloadRequest : NSObject <FCOperationCanceling, FCOperationPrioritizing> {
    id /* block */  _cancelHandler;
    id /* block */  _priorityHandler;
    long long  _relativePriority;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long relativePriority;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (long long)relativePriority;
- (void)setRelativePriority:(long long)arg1;

@end
