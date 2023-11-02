
@interface QOSErrorMessage : NSObject {
    <ObjcQOSErrorMessageProtocolInternal> * _underlyingObject;
}

@property (readonly) <ObjcQOSErrorMessageProtocolInternal> *underlyingObject;

- (void).cxx_destruct;
- (void)fetchLocalizedErrorMessageForItems:(id)arg1 usingError:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)getLocalizedErrorMessageForItems:(id)arg1 usingError:(id)arg2;
- (id)initWithConfig:(id)arg1 logger:(id /* block */)arg2 metricsRecorder:(id /* block */)arg3 defaultAlert:(id /* block */)arg4;
- (id)underlyingObject;

@end
