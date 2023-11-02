
@interface _STKTextInputObjCStoreFacade : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void store;
}

- (void).cxx_destruct;
- (id)init;
- (id)representationsForStickersWithIdentifiers:(id)arg1 roles:(id)arg2 error:(id*)arg3;
- (id)stickersWithIdentifiers:(id)arg1 roles:(id)arg2 error:(id*)arg3;
- (bool)touchStickerWithIdentifier:(id)arg1 error:(id*)arg2;

@end
