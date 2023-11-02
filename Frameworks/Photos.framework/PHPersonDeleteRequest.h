
@interface PHPersonDeleteRequest : PHObjectDeleteRequest {
    bool  _force;
}

@property (nonatomic) bool force;

- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (bool)force;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (void)setForce:(bool)arg1;
- (bool)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2;

@end
