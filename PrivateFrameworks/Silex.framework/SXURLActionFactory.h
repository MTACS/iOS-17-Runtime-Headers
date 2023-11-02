
@interface SXURLActionFactory : NSObject <SXURLActionFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)actionForURL:(id)arg1;
- (id)actionForURL:(id)arg1 analytics:(id)arg2;

@end
