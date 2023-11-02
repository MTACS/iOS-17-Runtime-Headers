
@interface TICryptographerMock : NSObject <TICryptographing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)stringDigestForName:(id)arg1;

@end
