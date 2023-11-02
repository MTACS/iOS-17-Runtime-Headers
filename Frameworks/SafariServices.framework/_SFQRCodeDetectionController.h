
@interface _SFQRCodeDetectionController : NSObject {
    BCSQRCodeParser * _QRCodeParser;
    NSMutableSet * _cachedElements;
    <BCSAction> * _lastDetectedAction;
}

+ (id)sharedController;

- (void).cxx_destruct;
- (id)actionForElement:(id)arg1;
- (id)adjustedCopyActionForAction:(id)arg1 elementInfo:(id)arg2;
- (void)cacheElement:(id)arg1;
- (void)clearCachedElement:(id)arg1;
- (id)elementForAction:(id)arg1;
- (void)getActionForImage:(id)arg1 completion:(id /* block */)arg2;
- (id)getActionForImageSynchronously:(id)arg1 userInfo:(id*)arg2;
- (id)init;
- (id)menuElementsForElementInfo:(id)arg1;

@end
