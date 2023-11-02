
@interface NABarButtonItem : NSObject {
    void additionalPageContentInset;
    void barButtonItem;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } additionalPageContentInset;
@property (nonatomic, readonly) UIBarButtonItem *barButtonItem;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalPageContentInset;
- (id)barButtonItem;
- (id)init;

@end
