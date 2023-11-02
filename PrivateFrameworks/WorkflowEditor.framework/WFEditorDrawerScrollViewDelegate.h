
@interface WFEditorDrawerScrollViewDelegate : NSObject <UIScrollViewDelegate> {
    WFDrawerItem * _drawerItem;
    NSObject<UIScrollViewDelegate> * _originalDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WFDrawerItem *drawerItem;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSObject<UIScrollViewDelegate> *originalDelegate;
@property (readonly) Class superclass;

+ (id)findScrollViewInView:(id)arg1;

- (void).cxx_destruct;
- (id)drawerItem;
- (void)forwardInvocation:(id)arg1;
- (id)initWithDrawerItem:(id)arg1 originalDelegate:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)originalDelegate;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setOriginalDelegate:(id)arg1;

@end
