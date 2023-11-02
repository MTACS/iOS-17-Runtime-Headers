
@interface TeaFoundation.BridgedProxyContainer : NSObject <TFContainerRegistry> {
    void callback;
    void privateContainer;
    void publicContainer;
}

@property (nonatomic, retain) <TFCallbackRegistration> *callback;
@property (nonatomic, retain) <TFRegistrationContainer> *privateContainer;
@property (nonatomic, retain) <TFRegistrationContainer> *publicContainer;

- (void).cxx_destruct;
- (id)callback;
- (id)init;
- (id)privateContainer;
- (id)publicContainer;
- (void)setCallback:(id)arg1;
- (void)setPrivateContainer:(id)arg1;
- (void)setPublicContainer:(id)arg1;

@end
