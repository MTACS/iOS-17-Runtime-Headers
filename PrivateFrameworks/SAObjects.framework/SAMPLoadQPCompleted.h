
@interface SAMPLoadQPCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAMPCollection *loadedItems;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)loadQPCompleted;
+ (id)loadQPCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)loadedItems;
- (bool)requiresResponse;
- (void)setLoadedItems:(id)arg1;

@end
