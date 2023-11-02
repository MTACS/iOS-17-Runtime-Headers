
@interface MKPlaceCardMenuBuildingOptions : NSObject {
    bool  _addMismatchedItems;
    UIMenuElement * _headerMenuElement;
    NSArray * _requestedActionTypes;
}

@property (nonatomic) bool addMismatchedItems;
@property (nonatomic, retain) UIMenuElement *headerMenuElement;
@property (nonatomic, readonly, copy) NSArray *requestedActionTypes;

- (void).cxx_destruct;
- (bool)addMismatchedItems;
- (id)headerMenuElement;
- (id)initWithRequestedActionTypes:(id)arg1;
- (id)requestedActionTypes;
- (void)setAddMismatchedItems:(bool)arg1;
- (void)setHeaderMenuElement:(id)arg1;

@end
