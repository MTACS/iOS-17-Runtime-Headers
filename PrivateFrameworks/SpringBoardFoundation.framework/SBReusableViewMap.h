
@interface SBReusableViewMap : NSObject <BSDescriptionProviding> {
    <SBReusableViewMapDelegate> * _delegate;
    bool  _invalidated;
    NSMapTable * _recycledViewsByClass;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBReusableViewMapDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long recycledViewCount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long viewRecyclingCount;

- (void).cxx_destruct;
- (void)addRecycledViewsOfClass:(Class)arg1 upToCount:(unsigned long long)arg2;
- (void)dealloc;
- (id)delegate;
- (id)dequeueReusableViewOfClass:(Class)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)enumerateRecycledViewsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (bool)isViewRecycled:(id)arg1;
- (id)newViewOfClass:(Class)arg1;
- (void)purgeAllViews;
- (void)purgeView:(id)arg1;
- (void)purgeViewsForClass:(Class)arg1;
- (void)recycleView:(id)arg1;
- (unsigned long long)recycledViewCount;
- (void)setDelegate:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)viewOfClass:(Class)arg1;
- (unsigned long long)viewRecyclingCount;

@end
