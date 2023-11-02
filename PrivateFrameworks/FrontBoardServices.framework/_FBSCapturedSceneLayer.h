
@interface _FBSCapturedSceneLayer : FBSSceneLayer <BSXPCCoding> {
    unsigned long long  _captureTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_initWithLayer:(id)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
