
@interface STLocationStatusDomainUserInteraction : STLocationStatusDomainData <STStatusDomainUserInteraction>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithData:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
