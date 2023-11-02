
@interface ICChecklistInfo : NSObject {
    unsigned long long  _numberOfCheckedItems;
    unsigned long long  _numberOfItems;
    unsigned long long  _numberOfUncheckedItems;
}

@property (nonatomic) unsigned long long numberOfCheckedItems;
@property (nonatomic) unsigned long long numberOfItems;
@property (nonatomic) unsigned long long numberOfUncheckedItems;

- (unsigned long long)numberOfCheckedItems;
- (unsigned long long)numberOfItems;
- (unsigned long long)numberOfUncheckedItems;
- (void)setNumberOfCheckedItems:(unsigned long long)arg1;
- (void)setNumberOfItems:(unsigned long long)arg1;
- (void)setNumberOfUncheckedItems:(unsigned long long)arg1;

@end
