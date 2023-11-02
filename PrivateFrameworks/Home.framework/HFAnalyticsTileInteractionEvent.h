
@interface HFAnalyticsTileInteractionEvent : HFAnalyticsEvent {
    NSString * _contextType;
    unsigned long long  _interactionType;
    bool  _isActionSetItem;
    bool  _isCameraItem;
    bool  _isRoomDashboard;
    bool  _isServiceLikeItem;
    bool  _isStatusItem;
    NSString * _itemClassName;
    long long  _itemPrimaryState;
    long long  _itemPriority;
    unsigned long long  _numberOfRepresentedHomeKitObjects;
    NSString * _processName;
    NSString * _sourceViewControllerClassName;
    NSString * _tileInteractionArea;
    NSNumber * _tileIsEditing;
}

@property (nonatomic, retain) NSString *contextType;
@property (nonatomic) unsigned long long interactionType;
@property (nonatomic) bool isActionSetItem;
@property (nonatomic) bool isCameraItem;
@property (nonatomic) bool isRoomDashboard;
@property (nonatomic) bool isServiceLikeItem;
@property (nonatomic) bool isStatusItem;
@property (nonatomic, retain) NSString *itemClassName;
@property (nonatomic) long long itemPrimaryState;
@property (nonatomic) long long itemPriority;
@property (nonatomic) unsigned long long numberOfRepresentedHomeKitObjects;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic, retain) NSString *sourceViewControllerClassName;
@property (nonatomic, retain) NSString *tileInteractionArea;
@property (nonatomic) NSNumber *tileIsEditing;

+ (unsigned long long)_numberOfRepresentedHomeKitObjectsForItem:(id)arg1;

- (void).cxx_destruct;
- (id)contextType;
- (id)initWithData:(id)arg1;
- (unsigned long long)interactionType;
- (bool)isActionSetItem;
- (bool)isCameraItem;
- (bool)isRoomDashboard;
- (bool)isServiceLikeItem;
- (bool)isStatusItem;
- (id)itemClassName;
- (long long)itemPrimaryState;
- (long long)itemPriority;
- (unsigned long long)numberOfRepresentedHomeKitObjects;
- (id)payload;
- (id)processName;
- (void)setContextType:(id)arg1;
- (void)setInteractionType:(unsigned long long)arg1;
- (void)setIsActionSetItem:(bool)arg1;
- (void)setIsCameraItem:(bool)arg1;
- (void)setIsRoomDashboard:(bool)arg1;
- (void)setIsServiceLikeItem:(bool)arg1;
- (void)setIsStatusItem:(bool)arg1;
- (void)setItemClassName:(id)arg1;
- (void)setItemPrimaryState:(long long)arg1;
- (void)setItemPriority:(long long)arg1;
- (void)setNumberOfRepresentedHomeKitObjects:(unsigned long long)arg1;
- (void)setProcessName:(id)arg1;
- (void)setSourceViewControllerClassName:(id)arg1;
- (void)setTileInteractionArea:(id)arg1;
- (void)setTileIsEditing:(id)arg1;
- (id)sourceViewControllerClassName;
- (id)tileInteractionArea;
- (id)tileIsEditing;

@end
