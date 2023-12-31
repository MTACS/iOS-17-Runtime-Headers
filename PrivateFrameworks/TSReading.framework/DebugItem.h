
@interface DebugItem : NSObject {
    SEL  _action;
    id  _target;
    NSString * _title;
}

@property (nonatomic, readonly) SEL action;
@property (nonatomic, readonly) id target;
@property (nonatomic, readonly) NSString *title;

- (SEL)action;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)target;
- (id)title;

@end
