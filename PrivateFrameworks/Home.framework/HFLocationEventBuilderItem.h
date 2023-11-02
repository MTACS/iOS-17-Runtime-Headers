
@interface HFLocationEventBuilderItem : HFEventBuilderItem

@property (nonatomic, retain) HFEventBuilder<HFLocationEventBuilder> *locationEventBuilder;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)locationEventBuilder;
- (void)setLocationEventBuilder:(id)arg1;

@end
