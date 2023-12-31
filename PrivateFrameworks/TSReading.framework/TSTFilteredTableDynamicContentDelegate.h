
@interface TSTFilteredTableDynamicContentDelegate : NSObject <TSTLayoutDynamicContentProtocol> {
    TSTTableModel * mTableModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)cell:(id*)arg1 forCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (void)dealloc;
- (bool)dynamicContentMustDrawOnMainThread;
- (id)initWithTableModel:(id)arg1;

@end
