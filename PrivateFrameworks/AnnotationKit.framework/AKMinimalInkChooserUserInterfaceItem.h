
@interface AKMinimalInkChooserUserInterfaceItem : AKMinimalUserInterfaceItem <AKInkChooserUserInterfaceItem> {
    PKInk * _ink;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PKInk *ink;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)ink;
- (void)setInk:(id)arg1;

@end
