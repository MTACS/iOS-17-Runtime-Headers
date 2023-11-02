
@interface _UIViewPropertyAnimationDescription : NSObject {
    NSMutableDictionary * _updates;
    UIView * _view;
}

@property (nonatomic, readonly) NSMutableDictionary *updates;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)_addUpdate:(id)arg1;
- (id)init;
- (id)initWithView:(id)arg1;
- (id)updates;
- (id)view;

@end
