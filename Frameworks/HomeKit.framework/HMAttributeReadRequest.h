
@interface HMAttributeReadRequest : HMAttributeRequest <HMReadOperation>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)readRequestWithAccessoryProfile:(id)arg1 attribute:(id)arg2;

- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
