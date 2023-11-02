
@interface SearchUIButtonItemFactory : NSObject {
    NSMutableArray * _buttonItemGenerators;
    NSMutableArray * _fetchedButtonItems;
}

@property (nonatomic, retain) NSMutableArray *buttonItemGenerators;
@property (nonatomic, retain) NSMutableArray *fetchedButtonItems;

- (void).cxx_destruct;
- (id)buttonItemGenerators;
- (void)fetchSearchUIButtonitemsWithSFButtonItems:(id)arg1 maxButtonItems:(unsigned long long)arg2 shouldReverseButtonOrder:(bool)arg3 completion:(id /* block */)arg4;
- (id)fetchedButtonItems;
- (void)setButtonItemGenerators:(id)arg1;
- (void)setFetchedButtonItems:(id)arg1;

@end
