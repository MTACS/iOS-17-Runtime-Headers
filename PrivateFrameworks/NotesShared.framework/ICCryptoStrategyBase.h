
@interface ICCryptoStrategyBase : NSObject {
    ICCloudSyncingObject * _object;
}

@property (nonatomic, readonly) ICCloudSyncingObject *object;

- (void).cxx_destruct;
- (id)initWithCloudSyncingObject:(id)arg1;
- (void)invalidateStrategy;
- (id)object;
- (void)performBlockIfAccountExists:(id /* block */)arg1;
- (void)performBlockIfAttachmentExists:(id /* block */)arg1;
- (void)performBlockIfMediaExists:(id /* block */)arg1;
- (void)performBlockIfNoteExists:(id /* block */)arg1;
- (void)performBlockIfObjectExists:(id /* block */)arg1;
- (void)performBlockIfPreviewImageExists:(id /* block */)arg1;

@end
