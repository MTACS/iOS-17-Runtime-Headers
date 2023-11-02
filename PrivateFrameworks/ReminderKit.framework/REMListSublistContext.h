
@interface REMListSublistContext : NSObject {
    REMList * _list;
}

@property (nonatomic, retain) REMList *list;

- (void).cxx_destruct;
- (id)fetchCustomSmartListsWithError:(id*)arg1;
- (id)fetchListsWithError:(id*)arg1;
- (id)initWithList:(id)arg1;
- (id)list;
- (void)setList:(id)arg1;

@end
