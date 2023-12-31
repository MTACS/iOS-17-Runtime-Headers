
@protocol IKJSDOMImplementationLS <JSExport>

@required

- (long long)asynchronousMode;
- (IKDOMLSInput *)createLSInput;
- (IKDOMLSParser *)createLSParser:(long long)arg1 :(NSString *)arg2;
- (IKDOMLSSerializer *)createLSSerializer;
- (long long)synchronousMode;

@end
