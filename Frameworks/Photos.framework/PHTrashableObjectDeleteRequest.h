
@interface PHTrashableObjectDeleteRequest : PHObjectDeleteRequest {
    bool  _clientEntitledToExpunge;
    long long  _operation;
}

@property (getter=isClientEntitledToExpunge, nonatomic, readonly) bool clientEntitledToExpunge;
@property (nonatomic, readonly) long long operation;

+ (id)deleteRequestForObject:(id)arg1;
+ (id)deleteRequestForObject:(id)arg1 operation:(long long)arg2;

- (void)encodeToXPCDict:(id)arg1;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2 operation:(long long)arg3;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (bool)isClientEntitledToExpunge;
- (long long)operation;
- (bool)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2;

@end
