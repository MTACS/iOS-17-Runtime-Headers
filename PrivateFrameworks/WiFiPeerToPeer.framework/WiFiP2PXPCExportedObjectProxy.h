
@interface WiFiP2PXPCExportedObjectProxy : NSObject {
    id  _exportedObject;
    Class  _exportedObjectClass;
}

@property (nonatomic) id exportedObject;

- (void).cxx_destruct;
- (id)exportedObject;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setExportedObject:(id)arg1;

@end
