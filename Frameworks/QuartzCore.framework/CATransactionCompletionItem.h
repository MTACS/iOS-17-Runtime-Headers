
@interface CATransactionCompletionItem : NSObject {
    void * _priv;
}

+ (id)completionItem;

- (void)dealloc;
- (id)init;
- (void)invalidate;

@end
