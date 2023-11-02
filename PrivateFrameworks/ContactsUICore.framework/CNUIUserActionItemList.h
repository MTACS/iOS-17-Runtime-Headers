
@interface CNUIUserActionItemList : NSObject {
    UIImage * _icon;
    NSArray * _items;
    NSString * _type;
}

@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)icon;
- (id)initWithItems:(id)arg1 type:(id)arg2 icon:(id)arg3;
- (id)items;
- (id)type;

@end
