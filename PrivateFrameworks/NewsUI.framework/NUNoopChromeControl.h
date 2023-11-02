
@interface NUNoopChromeControl : NSObject <NUChromeControl>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)prefersChromeHidden:(bool)arg1 fromViewController:(id)arg2;

@end
