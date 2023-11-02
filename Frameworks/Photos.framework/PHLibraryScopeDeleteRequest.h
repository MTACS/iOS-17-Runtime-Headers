
@interface PHLibraryScopeDeleteRequest : PHObjectDeleteRequest {
    long long  _operation;
    bool  _photosctlExpungeOverride;
}

@property (nonatomic) long long operation;
@property (nonatomic) bool photosctlExpungeOverride;

- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (long long)operation;
- (bool)photosctlExpungeOverride;
- (void)setOperation:(long long)arg1;
- (void)setPhotosctlExpungeOverride:(bool)arg1;
- (bool)validateForDeleteManagedObject:(id)arg1 error:(id*)arg2;

@end
