
@interface SXCloseActionHandler : NSObject <SXCloseActionHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)handleCloseActionOnPresenter:(id)arg1;

@end
