
@interface SAContextPromise : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *promiseTypes;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)contextPromise;
+ (id)contextPromiseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)promiseTypes;
- (bool)requiresResponse;
- (void)setPromiseTypes:(id)arg1;

@end
