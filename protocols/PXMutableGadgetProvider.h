
@protocol PXMutableGadgetProvider <NSObject>

@required

- (void)addGadgets:(NSArray *)arg1;
- (void)insertGadgets:(NSArray *)arg1 atIndexes:(NSIndexSet *)arg2;
- (void)removeAllGadgets;
- (void)removeGadgets:(NSArray *)arg1;
- (void)removeGadgetsAtIndexes:(NSIndexSet *)arg1;

@end
