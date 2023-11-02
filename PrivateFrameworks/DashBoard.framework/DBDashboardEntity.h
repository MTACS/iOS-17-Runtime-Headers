
@interface DBDashboardEntity : NSObject <NSCopying> {
    NSString * _identifier;
}

@property (setter=_setSR_associatedChangeItem:, nonatomic, retain) DBDashboardWorkspaceStateChangeItem *_sr_associatedChangeItem;
@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (void)_buildDescriptionWithBuilder:(id)arg1;
- (id)_initWithIdentifier:(id)arg1;
- (void)_setSR_associatedChangeItem:(id)arg1;
- (id)_sr_associatedChangeItem;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)init;
- (bool)isApplicationEntity;
- (bool)isFullScreenEntity;
- (bool)isHomescreenEntity;
- (bool)isProxiedApplicationEntity;
- (bool)isSiriEntity;

@end
