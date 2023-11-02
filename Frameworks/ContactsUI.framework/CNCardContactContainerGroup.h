
@interface CNCardContactContainerGroup : CNCardGroup {
    NSArray * _containers;
}

@property (nonatomic, retain) NSArray *containers;

- (void).cxx_destruct;
- (id)containers;
- (id)displayItems;
- (id)editingItems;
- (void)setContainers:(id)arg1;

@end
