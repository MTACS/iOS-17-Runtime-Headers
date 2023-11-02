
@interface SBIconViewContextMenuContext : NSObject <NSCopying> {
    UIContextMenuInteraction * _contextMenuInteraction;
    SBIconView * _iconView;
    NSUUID * _identifier;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    NSString * _nodeIdentifier;
}

@property (nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (nonatomic, readonly) SBIconView *iconView;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } location;

- (void).cxx_destruct;
- (id)contextMenuInteraction;
- (id)contextMenuNotificationUserInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)iconView;
- (id)identifier;
- (id)initWithIconView:(id)arg1 location:(struct CGPoint { double x1; double x2; })arg2;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })location;
- (void)setContextMenuInteraction:(id)arg1;

@end
