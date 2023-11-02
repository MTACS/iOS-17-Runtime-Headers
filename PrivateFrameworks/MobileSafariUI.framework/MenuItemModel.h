
@interface MenuItemModel : NSObject {
    id /* block */  _action;
    id  _payload;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly, copy) id /* block */ action;
@property (nonatomic, readonly) id payload;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id /* block */)action;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 payload:(id)arg3 action:(id /* block */)arg4;
- (id)payload;
- (id)subtitle;
- (id)title;

@end
