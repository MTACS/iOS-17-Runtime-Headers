
@interface _PXToastAction : NSObject {
    id /* block */  _action;
    NSString * _title;
}

@property (nonatomic, readonly) id /* block */ action;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id /* block */)action;
- (id)init;
- (id)initWithTitle:(id)arg1 action:(id /* block */)arg2;
- (id)title;

@end
