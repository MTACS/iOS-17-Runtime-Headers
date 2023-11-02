
@interface PXNavigationListActionItem : PXNavigationListItem {
    NSString * _actionType;
    NSString * _glyphImageName;
    long long  _style;
}

@property (nonatomic, readonly) NSString *actionType;

- (void).cxx_destruct;
- (id)actionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)glyphImageName;
- (unsigned long long)hash;
- (id)initWithActionType:(id)arg1;
- (bool)isEqualToNavigationListItem:(id)arg1;
- (id)representedObject;
- (long long)style;

@end
