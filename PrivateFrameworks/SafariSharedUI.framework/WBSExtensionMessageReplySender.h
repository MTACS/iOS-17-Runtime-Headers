
@interface WBSExtensionMessageReplySender : NSObject {
    id /* block */  _block;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)arg1;
- (void)sendReplyIfNotAlreadySent:(id)arg1;

@end
