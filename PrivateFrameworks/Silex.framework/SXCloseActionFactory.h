
@interface SXCloseActionFactory : NSObject <SXActionFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)actionForAddition:(id)arg1;
- (id)actionForURL:(id)arg1;

@end
