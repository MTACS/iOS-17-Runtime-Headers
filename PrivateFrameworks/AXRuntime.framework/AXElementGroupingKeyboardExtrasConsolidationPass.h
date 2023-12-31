
@interface AXElementGroupingKeyboardExtrasConsolidationPass : NSObject <AXElementGroupingTransformationPass>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)shouldTransformGroup:(id)arg1 forGrouper:(id)arg2;
- (id)transformGroup:(id)arg1 forGrouper:(id)arg2;

@end
