
@interface SGMicrodataItem : SGMicrodataItemScope {
    NSMutableArray * _itemRef;
    NSSet * _itemType;
}

@property (nonatomic, readonly) NSArray *itemRef;
@property (nonatomic, readonly) NSSet *itemType;

- (void).cxx_destruct;
- (id)initWithItemType:(id)arg1 itemRef:(id)arg2;
- (id)itemRef;
- (id)itemType;
- (void)resolveItemRefsWithDocument:(id)arg1;

@end
