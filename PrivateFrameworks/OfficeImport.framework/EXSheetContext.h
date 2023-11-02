
@interface EXSheetContext : NSObject <OCDDelayedNodeContext> {
    NSURL * mPackageLocation;
    EXReadState * mSheetState;
    NSString * mType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSheetLocation:(id)arg1 sheetXmlType:(id)arg2 state:(id)arg3;
- (bool)loadDelayedNode:(id)arg1;

@end
