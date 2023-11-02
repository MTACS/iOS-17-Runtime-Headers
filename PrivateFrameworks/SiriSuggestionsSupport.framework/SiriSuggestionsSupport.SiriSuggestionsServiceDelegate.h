
@interface SiriSuggestionsSupport.SiriSuggestionsServiceDelegate : NSObject <NSXPCListenerDelegate> {
    void client;
    void eventDrivenClient;
}

- (void).cxx_destruct;
- (id)init;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
