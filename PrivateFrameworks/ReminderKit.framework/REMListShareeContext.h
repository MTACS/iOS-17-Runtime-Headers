
@interface REMListShareeContext : NSObject {
    REMList * _list;
    REMSharee * _sharedOwner;
}

@property (nonatomic, retain) REMList *list;
@property (nonatomic, readonly) REMSharee *sharedOwner;
@property (nonatomic, readonly) NSArray *sharees;

- (void).cxx_destruct;
- (id)initWithList:(id)arg1;
- (id)list;
- (void)setList:(id)arg1;
- (id)sharedOwner;
- (id)sharees;
- (id)shareesExcludingOwner;

@end
