
@interface BLTGizmoLegacyMapSectionInfo : NSObject {
    NSString * _displayName;
    BBSectionIcon * _icon;
    NSDictionary * _notificationMap;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) BBSectionIcon *icon;
@property (nonatomic, readonly, copy) NSString *mappedParentSectionID;
@property (nonatomic, readonly, copy) NSString *mappedSectionID;

- (void).cxx_destruct;
- (id)displayName;
- (id)icon;
- (id)initWithNotificationMap:(id)arg1;
- (id)mappedParentSectionID;
- (id)mappedSectionID;
- (void)setDisplayName:(id)arg1;
- (void)setIcon:(id)arg1;

@end
