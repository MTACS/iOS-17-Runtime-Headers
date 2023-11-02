
@interface EDProcessor : NSObject {
    NSMutableArray * mObjects;
    EDResources * mResources;
    EDWorkbook * mWorkbook;
}

- (void).cxx_destruct;
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (void)applyProcessorWithSheet:(id)arg1;
- (id)initWithWorkbook:(id)arg1;
- (bool)isObjectSupported:(id)arg1;
- (void)markObjectForPostProcessing:(id)arg1;

@end
