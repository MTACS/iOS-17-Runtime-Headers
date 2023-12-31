
@interface IKDOMImplementation : IKJSObject <IKJSDOMImplementation, IKJSDOMImplementationLS>

@property (getter=asynchronousMode, readonly) long long MODE_ASYNCHRONOUS;
@property (getter=synchronousMode, readonly) long long MODE_SYNCHRONOUS;

- (long long)asynchronousMode;
- (id)createDocument:(id)arg1 :(id)arg2;
- (id)createLSInput;
- (id)createLSParser:(long long)arg1 :(id)arg2;
- (id)createLSSerializer;
- (long long)synchronousMode;

@end
