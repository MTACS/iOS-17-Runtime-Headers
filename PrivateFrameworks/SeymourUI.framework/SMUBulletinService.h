
@interface SMUBulletinService : NSObject <SMUBulletinService>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initNoop;
- (void)presentBulletinWithInfo:(id)arg1 withCompletion:(id /* block */)arg2;

@end
