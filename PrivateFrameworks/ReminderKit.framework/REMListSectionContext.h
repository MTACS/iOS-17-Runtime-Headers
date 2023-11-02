
@interface REMListSectionContext : NSObject {
    REMList * _list;
}

@property (nonatomic, readonly) bool hasSections;
@property (nonatomic, retain) REMList *list;

- (void).cxx_destruct;
- (bool)hasSections;
- (id)initWithList:(id)arg1;
- (id)list;
- (void)setList:(id)arg1;

@end
