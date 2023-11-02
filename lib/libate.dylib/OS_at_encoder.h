
@interface OS_at_encoder : OS_object <OS_at_encoder>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)copy;
- (void)dealloc;
- (id)debugDescription;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
