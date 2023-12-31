
@interface ASASelectorControl : ASAControl {
    NSArray * _currentItems;
}

@property (nonatomic, readonly, copy) NSArray *availableItems;
@property (nonatomic) unsigned int currentItem;
@property (nonatomic) NSArray *currentItems;

- (id)availableItems;
- (id)coreAudioClassName;
- (unsigned int)currentItem;
- (id)currentItems;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(bool)arg2;
- (id)nameForItem:(unsigned int)arg1;
- (void)setCurrentItem:(unsigned int)arg1;
- (void)setCurrentItems:(id)arg1;

@end
