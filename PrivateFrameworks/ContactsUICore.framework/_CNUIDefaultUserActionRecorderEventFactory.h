
@interface _CNUIDefaultUserActionRecorderEventFactory : NSObject <CNUIDefaultUserActionRecorderEventFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)recentEventForAddress:(id)arg1 kind:(id)arg2 metadata:(id)arg3;

@end
