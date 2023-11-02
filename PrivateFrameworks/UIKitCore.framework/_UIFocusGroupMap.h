
@interface _UIFocusGroupMap : NSObject <NSCopying> {
    <UICoordinateSpace> * _coordinateSpace;
    NSMapTable * _environmentToGroupMap;
    NSArray * _focusGroups;
    NSMapTable * _identifierToGroupMap;
    NSMapTable * _identifierToPrimaryItemMap;
    _UIFocusGroup * _nullGroup;
    NSMapTable * _standInItemsMap;
}

@property (nonatomic, readonly) <UICoordinateSpace> *coordinateSpace;
@property (nonatomic, readonly) NSArray *focusGroups;
@property (nonatomic, readonly) NSArray *focusItems;

- (void).cxx_destruct;
- (id)_indexEnvironment:(id)arg1;
- (void)_indexItems:(id)arg1;
- (id)coordinateSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)focusGroupForItem:(id)arg1;
- (id)focusGroups;
- (id)focusItems;
- (id)initWithItems:(id)arg1 coordinateSpace:(id)arg2;
- (id)initWithItems:(id)arg1 standInItemsMap:(id)arg2 coordinateSpace:(id)arg3;
- (id)visualDescription;

@end
