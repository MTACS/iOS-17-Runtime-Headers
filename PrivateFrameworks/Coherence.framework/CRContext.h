
@interface CRContext : NSObject {
    void assetManager;
    void crdtDatabase;
    void encryptionDelegate;
}

+ (id)newTransientContextObjC;

- (void).cxx_destruct;
- (id)init;

@end
