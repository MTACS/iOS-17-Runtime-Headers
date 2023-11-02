
@protocol MTMAPIResponse

@required

- (id)itemInSection:(long long)arg1 row:(long long)arg2;
- (NSArray *)itemsFor:(long long)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)sectionAtIndex:(unsigned long long)arg1;

@end
