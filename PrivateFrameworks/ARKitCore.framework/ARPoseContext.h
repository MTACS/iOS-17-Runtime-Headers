
@interface ARPoseContext : NSObject <ARResultDataContext> {
    long long  _cameraPosition;
    id /* block */  _cameraTransformCallback;
}

@property (nonatomic) long long cameraPosition;
@property (nonatomic, copy) id /* block */ cameraTransformCallback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)cameraPosition;
- (id /* block */)cameraTransformCallback;
- (id)imageData;
- (id)resultDataOfClass:(Class)arg1;
- (void)setCameraPosition:(long long)arg1;
- (void)setCameraTransformCallback:(id /* block */)arg1;

@end
