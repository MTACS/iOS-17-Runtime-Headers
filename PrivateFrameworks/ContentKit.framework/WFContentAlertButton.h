
@interface WFContentAlertButton : WFSelectableAlertButton {
    WFContentItem * _contentItem;
    NSObject<OS_dispatch_group> * _group;
    bool  _hasContentSubtitle;
    bool  _hideSubtitle;
    NSString * _subtitle;
}

@property (nonatomic, readonly) WFContentItem *contentItem;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *group;
@property (nonatomic, readonly) bool hasContentSubtitle;
@property (nonatomic) bool hideSubtitle;
@property (nonatomic, copy) NSString *subtitle;

+ (id)buttonWithContentItem:(id)arg1 selected:(bool)arg2 stickySelection:(bool)arg3 handler:(id /* block */)arg4;
+ (void)processContentAlertButtonSubtitles:(id)arg1;

- (void).cxx_destruct;
- (bool)addSubtitleCompletionHandler:(id /* block */)arg1;
- (id)contentItem;
- (void)getSubtitle:(id /* block */)arg1;
- (id)group;
- (bool)hasContentSubtitle;
- (bool)hideSubtitle;
- (void)setGroup:(id)arg1;
- (void)setHideSubtitle:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)start;
- (id)subtitle;

@end
