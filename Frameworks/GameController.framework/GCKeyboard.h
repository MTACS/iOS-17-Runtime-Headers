
@interface GCKeyboard : NSObject <GCDevice> {
    NSObject<OS_dispatch_queue> * _handlerQueue;
    GCKeyboardInput * _keyboardInput;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *handlerQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GCKeyboardInput *keyboardInput;
@property (nonatomic, readonly) GCPhysicalInputProfile *physicalInputProfile;
@property (nonatomic, readonly) NSString *productCategory;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *vendorName;

+ (id)coalescedKeyboard;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)handlerQueue;
- (id)init;
- (id)keyboardInput;
- (id)physicalInputProfile;
- (id)productCategory;
- (void)setHandlerQueue:(id)arg1;
- (id)vendorName;

@end
