
@interface _UIFindInteraction : NSObject <UIFindInteractionDelegate, UIInteraction> {
    <_UITextSearching> * _searchableObject;
    UIView * _view;
    UIFindInteraction * _wrappedFindInteraction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFindNavigatorVisible, nonatomic, readonly) bool findNavigatorVisible;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *replacementText;
@property (nonatomic, copy) NSString *searchText;
@property (nonatomic) <_UITextSearching> *searchableObject;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, retain) UIFindInteraction *wrappedFindInteraction;

- (void).cxx_destruct;
- (void)didMoveToView:(id)arg1;
- (void)dismissFindNavigator;
- (void)findInteraction:(id)arg1 didBeginFindSession:(id)arg2;
- (void)findInteraction:(id)arg1 didEndFindSession:(id)arg2;
- (id)findInteraction:(id)arg1 sessionForView:(id)arg2;
- (void)findNext;
- (void)findPrevious;
- (id)init;
- (bool)isFindNavigatorVisible;
- (void)presentFindNavigatorShowingReplace:(bool)arg1;
- (id)replacementText;
- (id)searchText;
- (id)searchableObject;
- (void)setReplacementText:(id)arg1;
- (void)setSearchText:(id)arg1;
- (void)setSearchableObject:(id)arg1;
- (void)setWrappedFindInteraction:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;
- (id)wrappedFindInteraction;

@end
