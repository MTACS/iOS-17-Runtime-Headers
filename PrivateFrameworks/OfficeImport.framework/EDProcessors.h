
@interface EDProcessors : NSObject {
    NSMutableArray * mProcessors;
    EDWorkbook * mWorkbook;
}

- (void).cxx_destruct;
- (void)addProcessorClass:(Class)arg1;
- (void)applyProcessorsWithSheet:(id)arg1;
- (bool)hasProcessors;
- (id)initWithWorkbook:(id)arg1;
- (void)markObject:(id)arg1 processor:(Class)arg2;
- (void)removeAllObjects;
- (void)removeProcessorClass:(Class)arg1;

@end
