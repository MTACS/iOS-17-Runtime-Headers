
@interface _UIFocusGroup : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    NSMutableArray * _childGroups;
    <UICoordinateSpace> * _coordinateSpace;
    struct { 
        unsigned int itemOrderValid : 1; 
        unsigned int childGroupOrderValid : 1; 
        unsigned int primaryItemValid : 1; 
        unsigned int primaryRectValid : 1; 
    }  _flags;
    NSString * _identifier;
    NSMutableArray * _items;
    UIView * _owningView;
    _UIFocusGroup * _parentGroup;
    <UIFocusItem> * _primaryItem;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _primaryRect;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic, readonly) NSArray *childGroups;
@property (nonatomic, readonly) <UICoordinateSpace> *coordinateSpace;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *items;
@property (getter=_owningView, nonatomic, readonly) UIView *owningView;
@property (nonatomic, readonly) _UIFocusGroup *parentGroup;
@property (nonatomic, readonly) <UIFocusItem> *primaryItem;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } primaryRect;

+ (id)nullGroupWithCoordinateSpace:(id)arg1;

- (void).cxx_destruct;
- (id)_deepCopyWithNewIdentifierToGroupMap:(id)arg1;
- (void)_insertChildGroup:(id)arg1;
- (void)_insertItem:(id)arg1;
- (void)_invalidateChildGroupOrder;
- (void)_invalidateItemOrder;
- (void)_invalidatePrimaryItem;
- (void)_invalidatePrimaryRect;
- (id)_owningView;
- (void)_updateWithEnvironment:(id)arg1;
- (void)_validateChildGroupOrderIfNecessary;
- (void)_validateItemOrderIfNecessary;
- (void)_validatePrimaryItemIfNecessary;
- (void)_validatePrimaryRectIfNeccessary;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)childGroupWithIdentifier:(id)arg1;
- (id)childGroups;
- (id)coordinateSpace;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 parentGroup:(id)arg2 coordinateSpace:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFocusGroup:(id)arg1;
- (id)items;
- (id)parentGroup;
- (id)primaryItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })primaryRect;

@end
