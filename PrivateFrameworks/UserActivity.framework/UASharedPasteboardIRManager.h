
@interface UASharedPasteboardIRManager : NSObject {
    NSMutableDictionary * _lookupTable;
}

@property (retain) NSMutableDictionary *lookupTable;

+ (id)sharedIRManager;

- (void).cxx_destruct;
- (id)converterForType:(id)arg1;
- (id)init;
- (void)initializeConverters;
- (id)lookupTable;
- (void)registerIRHandlerClass:(Class)arg1 forType:(id)arg2;
- (id)registeredConverters;
- (void)setLookupTable:(id)arg1;

@end
