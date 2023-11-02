
@interface PREditorLookViews : NSObject <PREditingLookViewProviding> {
    UIView * _backgroundView;
    UIView * _floatingView;
    UIView * _foregroundView;
}

@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) NSArray *contentViews;
@property (nonatomic, readonly) UIView *floatingView;
@property (nonatomic, readonly) UIView *foregroundView;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)contentViews;
- (void)enumerateViewsUsingBlock:(id /* block */)arg1;
- (id)floatingView;
- (id)foregroundView;
- (id)init;

@end
