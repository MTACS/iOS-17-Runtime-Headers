
@interface WDEmptyUserActivityResponder : NSObject <WDUserActivityResponder>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)emptyUserActivityResponder;

- (void)applyChangeActivity:(id)arg1;
- (id)applyTransitionActivity:(id)arg1;

@end
