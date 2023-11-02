
@interface SBIconListRotationIconViewProvider : NSObject <SBIconViewProviding> {
    SBIconListView * _listView;
}

@property (nonatomic, readonly) SBIconListView *listView;

- (void).cxx_destruct;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (id)dequeueReusableIconViewOfClass:(Class)arg1;
- (id)initWithListView:(id)arg1;
- (bool)isIconViewRecycled:(id)arg1;
- (id)listView;
- (void)recycleIconView:(id)arg1;

@end
