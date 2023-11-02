
@interface WBSWebExtensionWebNavigationURLPredicate : NSObject {
    long long  _type;
    id  _value;
}

- (void).cxx_destruct;
- (id)initWithTypeString:(id)arg1 value:(id)arg2 outErrorMessage:(id*)arg3;
- (bool)matchesURL:(id)arg1;

@end
