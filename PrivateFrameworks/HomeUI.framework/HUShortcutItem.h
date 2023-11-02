
@interface HUShortcutItem : HFItem <NSCopying> {
    bool  _selectable;
    HFTriggerBuilder * _triggerBuilder;
}

@property (nonatomic, readonly) bool selectable;
@property (nonatomic, readonly) HFTriggerBuilder *triggerBuilder;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithTriggerBuilder:(id)arg1 selectable:(bool)arg2;
- (bool)selectable;
- (id)triggerBuilder;

@end
