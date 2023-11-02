
@interface PHMemoryDeleteRequest : PHObjectDeleteRequest {
    bool  _clientEntitledToMemoryMutation;
}

@property (nonatomic, readonly) bool clientEntitledToMemoryMutation;

- (bool)clientEntitledToMemoryMutation;
- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (bool)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2;

@end
