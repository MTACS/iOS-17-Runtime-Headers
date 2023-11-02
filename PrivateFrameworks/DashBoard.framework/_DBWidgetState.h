
@interface _DBWidgetState : NSObject {
    UIView * _view;
    bool  _wantsLargeSize;
}

@property (nonatomic, retain) UIView *view;
@property (nonatomic) bool wantsLargeSize;

- (void).cxx_destruct;
- (void)setView:(id)arg1;
- (void)setWantsLargeSize:(bool)arg1;
- (id)view;
- (bool)wantsLargeSize;

@end
