
@interface WFRemoteWidgetDataProvider : NSObject <WFRemoteWidgetConnectionListenerDelegate> {
    WFRemoteWidgetConnection * _remoteWidgetConnection;
}

@property (nonatomic, retain) WFRemoteWidgetConnection *remoteWidgetConnection;

+ (id)enumerationParameterWithKey:(id)arg1 action:(id)arg2;
+ (void)handleReceivedData:(id)arg1 responseHandler:(id /* block */)arg2;
+ (id)linkActionFromRequest:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)remoteWidgetConnection;
- (void)remoteWidgetConnection:(id)arg1 didReceiveData:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)remoteWidgetConnectionConnectionLost:(id)arg1;
- (void)setRemoteWidgetConnection:(id)arg1;

@end
