
@interface _MSExtensionGlobalState : NSObject {
    <_MSMessageComposeExtensionImplProtocol> * _activeExtensionContext;
}

@property (nonatomic, retain) <_MSMessageComposeExtensionImplProtocol> *activeExtensionContext;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)activeExtensionContext;
- (void)setActiveExtensionContext:(id)arg1;

@end
