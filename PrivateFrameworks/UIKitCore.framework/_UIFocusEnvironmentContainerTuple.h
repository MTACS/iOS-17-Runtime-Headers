
@interface _UIFocusEnvironmentContainerTuple : NSObject {
    bool  _isScrollableContainer;
    <UIFocusItemContainer> * _itemContainer;
    <UIFocusEnvironment> * _owningEnvironment;
}

@property (nonatomic, readonly) bool isScrollableContainer;
@property (nonatomic, readonly) <UIFocusItemContainer> *itemContainer;
@property (nonatomic, readonly) <UIFocusEnvironment> *owningEnvironment;

+ (id)tupleWithOwningEnvironment:(id)arg1 itemContainer:(id)arg2;
+ (id)tupleWithRequiredContainerFromEnvironment:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithOwningEnvironment:(id)arg1 itemContainer:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isScrollableContainer;
- (id)itemContainer;
- (id)owningEnvironment;

@end
