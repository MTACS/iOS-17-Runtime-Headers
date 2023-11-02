
@interface PXGPPTLayoutTester : NSObject <PXGGeneratedLayoutDelegate> {
    NSArray * _inputItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *inputItems;
@property (readonly) Class superclass;

+ (id)mockPaddingValues;

- (void).cxx_destruct;
- (void)_iterateEditorialConfigurationsForItemsCount:(long long)arg1 itemsIncrement:(long long)arg2 handler:(id /* block */)arg3;
- (void)_iterateGridConfigurationsForItemsCount:(long long)arg1 itemsIncrement:(long long)arg2 handler:(id /* block */)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })generatedLayout:(id)arg1 bestCropRectForInputItemAtIndex:(unsigned int)arg2 withAspectRatio:(double)arg3;
- (id)generatedLayout:(id)arg1 inputItemAtIndex:(unsigned int)arg2;
- (id)generatedLayout:(id)arg1 objectReferenceAtIndex:(unsigned int)arg2;
- (id)inputItems;
- (void)runEditorialLayoutTestWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)runGridLayoutTestWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setInputItems:(id)arg1;

@end
