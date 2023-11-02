
@interface HUSideBarStaticItem : HFStaticItem {
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long type;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithSideBarStaticItemType:(unsigned long long)arg1;
- (id)resultDictionary;
- (unsigned long long)type;

@end
