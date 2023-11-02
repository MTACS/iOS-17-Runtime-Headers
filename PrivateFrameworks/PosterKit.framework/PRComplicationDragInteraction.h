
@interface PRComplicationDragInteraction : UIDragInteraction {
    PRComplicationDescriptor * _complicationDescriptor;
}

@property (nonatomic, readonly) PRComplicationDescriptor *complicationDescriptor;

+ (bool)isEnabledByDefault;

- (void).cxx_destruct;
- (id)complicationDescriptor;
- (id)initWithDelegate:(id)arg1 complicationDescriptor:(id)arg2;

@end
