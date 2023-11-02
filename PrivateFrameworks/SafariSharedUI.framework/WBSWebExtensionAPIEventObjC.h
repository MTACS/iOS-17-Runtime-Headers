
@interface WBSWebExtensionAPIEventObjC : WBSWebExtensionAPIObject {
    NSMapTable * _listeners;
    unsigned long long  _type;
}

- (void).cxx_destruct;

@end
