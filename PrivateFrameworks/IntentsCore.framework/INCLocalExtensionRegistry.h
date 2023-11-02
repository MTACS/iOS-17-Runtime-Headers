
@interface INCLocalExtensionRegistry : NSObject {
    NSMutableDictionary * _localExtensionsByIdentifier;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)deregisterLocalExtension:(id)arg1;
- (id)init;
- (id)localExtensionForIdentifier:(id)arg1;
- (id)localExtensions;
- (void)registerLocalExtension:(id)arg1;

@end
