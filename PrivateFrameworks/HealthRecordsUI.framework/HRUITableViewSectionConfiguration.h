
@interface HRUITableViewSectionConfiguration : NSObject {
    void sections;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSArray *sections;

- (void).cxx_destruct;
- (void)addSection:(id)arg1;
- (id)addSectionWithIdentifier:(id)arg1 firstRowReuseIdentifier:(id)arg2;
- (id)addSectionWithIdentifier:(id)arg1 rowReuseIdentifiers:(id)arg2;
- (id)description;
- (id)init;
- (long long)numberOfRowsInSection:(long long)arg1;
- (void)removeAllSections;
- (id)rowAtIndexPath:(id)arg1;
- (id)sections;
- (void)setSections:(id)arg1;

@end
