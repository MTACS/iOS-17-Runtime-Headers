
@interface NewsUI2.EditorialService : NSObject <TSEditorialItemChangeDelegate> {
    void delegate;
    void editorialItemProvider;
}

- (void).cxx_destruct;
- (id)init;
- (void)refreshEditorialItemsWithItems:(id)arg1;
- (void)updateEditorialItemWith:(id)arg1;

@end
