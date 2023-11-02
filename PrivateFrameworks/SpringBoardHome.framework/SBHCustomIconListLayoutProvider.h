
@interface SBHCustomIconListLayoutProvider : NSObject <SBIconListLayoutProvider> {
    <SBIconListLayout> * _defaultLayout;
    NSDictionary * _listLayouts;
}

@property (nonatomic, readonly) <SBIconListLayout> *defaultLayout;
@property (nonatomic, readonly, copy) NSDictionary *listLayouts;

- (void).cxx_destruct;
- (id)defaultLayout;
- (id)init;
- (id)initWithListLayouts:(id)arg1;
- (id)initWithListLayouts:(id)arg1 defaultLayout:(id)arg2;
- (id)layoutForIconLocation:(id)arg1;
- (id)listLayouts;

@end
