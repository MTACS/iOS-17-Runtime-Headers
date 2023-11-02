
@interface HFServiceIconItem : HFItem {
    <HFIconDescriptor> * _iconDescriptor;
}

@property (nonatomic, readonly) <HFIconDescriptor> *iconDescriptor;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)iconDescriptor;
- (id)initWithIconDescriptor:(id)arg1;

@end
