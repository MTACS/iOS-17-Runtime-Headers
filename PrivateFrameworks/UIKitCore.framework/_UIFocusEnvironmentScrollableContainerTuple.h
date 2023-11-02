
@interface _UIFocusEnvironmentScrollableContainerTuple : NSObject {
    <UIFocusEnvironment> * _owningEnvironment;
    <UIFocusItemScrollableContainer> * _scrollableContainer;
}

@property (nonatomic, readonly) <UIFocusEnvironment> *owningEnvironment;
@property (nonatomic, readonly) <UIFocusItemScrollableContainer> *scrollableContainer;

+ (id)tupleWithOwningEnvironment:(id)arg1 scrollableContainer:(id)arg2;
+ (id)tupleWithScrollView:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithOwningEnvironment:(id)arg1 scrollableContainer:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)owningEnvironment;
- (id)scrollableContainer;

@end
