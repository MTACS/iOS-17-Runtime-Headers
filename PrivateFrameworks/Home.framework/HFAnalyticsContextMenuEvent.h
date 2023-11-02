
@interface HFAnalyticsContextMenuEvent : HFAnalyticsEvent {
    NSString * _contextMenuTitle;
    NSString * _contextType;
    NSString * _itemClassName;
    NSString * _processName;
    NSString * _sourceViewControllerClassName;
}

@property (nonatomic, retain) NSString *contextMenuTitle;
@property (nonatomic, retain) NSString *contextType;
@property (nonatomic, retain) NSString *itemClassName;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic, retain) NSString *sourceViewControllerClassName;

- (void).cxx_destruct;
- (id)contextMenuTitle;
- (id)contextType;
- (id)initWithData:(id)arg1;
- (id)itemClassName;
- (id)payload;
- (id)processName;
- (void)setContextMenuTitle:(id)arg1;
- (void)setContextType:(id)arg1;
- (void)setItemClassName:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setSourceViewControllerClassName:(id)arg1;
- (id)sourceViewControllerClassName;

@end
