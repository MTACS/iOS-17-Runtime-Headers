
@interface NPKMessageCompositionManager : NSObject {
    NSString * _listenerID;
}

- (void).cxx_destruct;
- (void)_sendComposition:(id)arg1 toRecipient:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)init;
- (void)sendMessage:(id)arg1 withAppExtensionIdentifier:(id)arg2 toRecipient:(id)arg3 completion:(id /* block */)arg4;

@end
