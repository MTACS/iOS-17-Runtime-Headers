
@interface EBSheetContext : NSObject <OCDDelayedNodeContext> {
    unsigned int  mSheetIndex;
    EBReaderSheetState * mSheetState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSheetIndex:(unsigned int)arg1 state:(id)arg2;
- (bool)loadDelayedNode:(id)arg1;

@end
