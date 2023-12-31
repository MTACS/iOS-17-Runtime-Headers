
@interface SXJSONObjectMergerClassProvider : NSObject <SXJSONObjectMergerClassProviding> {
    Class  _objectClass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class objectClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)classForObject:(id)arg1 specVersion:(id)arg2;
- (id)initWithObjectClass:(Class)arg1;
- (Class)objectClass;

@end
