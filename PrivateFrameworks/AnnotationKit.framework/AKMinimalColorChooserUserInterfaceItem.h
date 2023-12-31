
@interface AKMinimalColorChooserUserInterfaceItem : AKMinimalUserInterfaceItem <AKColorChooserUserInterfaceItem> {
    UIColor * _color;
}

@property (nonatomic, retain) UIColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)color;
- (void)setColor:(id)arg1;

@end
