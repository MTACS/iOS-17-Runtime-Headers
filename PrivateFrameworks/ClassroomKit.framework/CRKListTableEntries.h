
@interface CRKListTableEntries : NSObject <CRKTableEntries> {
    NSArray * mArray;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)columnCount;
- (id)entryAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)initWithArray:(id)arg1;
- (unsigned long long)rowCount;

@end
