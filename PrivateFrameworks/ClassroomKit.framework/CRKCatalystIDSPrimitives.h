
@interface CRKCatalystIDSPrimitives : NSObject <CATIDSPrimitives> {
    <CRKIDSAddressTranslator> * _addressTranslator;
    <CRKIDSPrimitives> * _primitives;
}

@property (nonatomic, readonly) <CRKIDSAddressTranslator> *addressTranslator;
@property (nonatomic, readonly) <CRKIDSPrimitives> *primitives;

+ (id)crkOptionsFromOptions:(id)arg1;

- (void).cxx_destruct;
- (void)addMessageHandler:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)addressForAppleID:(id)arg1;
- (id)addressTranslator;
- (id)initWithPrimitives:(id)arg1 addressTranslator:(id)arg2;
- (id)primitives;
- (void)sendMessage:(id)arg1 toAddress:(id)arg2 fromID:(id)arg3 options:(id)arg4 completion:(id /* block */)arg5;

@end
