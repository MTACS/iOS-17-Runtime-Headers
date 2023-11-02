
@interface _INExtension : NSObject <INIntentHandlerProvidingPrivate, NSExtensionRequestHandling> {
    INExtensionContext * _extensionContext;
}

@property (nonatomic, readonly) INExtensionContext *_extensionContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (id)_extensionContext;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)handlerForIntent:(id)arg1;

@end
