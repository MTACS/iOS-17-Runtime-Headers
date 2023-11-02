
@interface FigCaptureDeferredPhotoProcessorRequest : NSObject {
    NSString * _applicationID;
    NSString * _captureRequestIdentifier;
    NSObject<OS_xpc_object> * _message;
    FigCaptureDeferredPhotoProcessorRequest * _parent;
    NSString * _photoIdentifier;
    unsigned int  _qosClass;
}

@property (nonatomic, readonly) NSString *applicationID;
@property (nonatomic, readonly) NSString *captureRequestIdentifier;
@property (nonatomic, readonly) FigCaptureDeferredPhotoProcessorRequest *parent;
@property (nonatomic, readonly) NSString *photoIdentifier;
@property (nonatomic, readonly) unsigned int qosClass;

- (id)applicationID;
- (id)captureRequestIdentifier;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithApplicationID:(id)arg1 captureRequstIdentifier:(id)arg2 photoIdentifier:(id)arg3 message:(id)arg4 qosClass:(unsigned int)arg5 parent:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)parent;
- (id)photoIdentifier;
- (unsigned int)qosClass;

@end
