
@interface OS_la_object : OS_object <OS_la_object>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)init;

@end
