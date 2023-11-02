
@interface _BMAccessAssertion : NSObject <BMAccessAssertion> {
    BMAccessDescriptor * _descriptor;
    long long  _handle;
    NSString * _path;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BMAccessDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *path;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)descriptor;
- (id)initWithDescriptor:(id)arg1 extensionToken:(id)arg2 path:(id)arg3;
- (id)path;

@end
