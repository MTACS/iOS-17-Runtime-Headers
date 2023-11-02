
@interface IKColumnCollectionElement : IKViewElement {
    NSArray * _columns;
}

@property (nonatomic, readonly, retain) NSArray *columns;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)columns;

@end
