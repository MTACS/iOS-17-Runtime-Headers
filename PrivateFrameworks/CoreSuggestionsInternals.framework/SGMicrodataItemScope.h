
@interface SGMicrodataItemScope : NSObject {
    NSMutableArray * _itemProps;
}

@property (nonatomic, readonly) NSArray *itemProps;

- (void).cxx_destruct;
- (void)addItemProp:(id)arg1;
- (id)init;
- (bool)isReferencedBy:(id)arg1;
- (id)itemProps;

@end
