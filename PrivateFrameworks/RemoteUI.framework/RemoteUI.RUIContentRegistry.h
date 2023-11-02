
@interface RemoteUI.RUIContentRegistry : NSObject {
    void liftUIContentRegistry;
    void views;
}

+ (id)sharedRegistry;

- (void).cxx_destruct;
- (id)init;
- (bool)supportsViewNamed:(id)arg1;

@end
