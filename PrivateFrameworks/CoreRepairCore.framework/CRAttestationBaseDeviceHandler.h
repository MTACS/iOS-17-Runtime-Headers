
@interface CRAttestationBaseDeviceHandler : NSObject <CRAttestationProtocol> {
    NSMutableDictionary * componentsMapping;
}

@property (nonatomic, retain) NSMutableDictionary *componentsMapping;

+ (id)getDeviceHandlerForProductType:(int)arg1;

- (void).cxx_destruct;
- (void)challengeComponentsWith:(id)arg1 withReply:(id /* block */)arg2;
- (id)componentsMapping;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)getStrongComponentsWithReply:(id /* block */)arg1;
- (id)init;
- (void)setComponentsMapping:(id)arg1;

@end
