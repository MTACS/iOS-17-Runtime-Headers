
@interface CNUICoreContactTypeAssessor : NSObject {
    CNFuture * _familyInfoFuture;
}

@property (nonatomic, readonly) CNFuture *familyInfoFuture;

+ (id)keysToFetch;

- (void).cxx_destruct;
- (long long)estiamtedTypeOfContact:(id)arg1;
- (id)familyInfoFuture;
- (id)init;
- (id)initWithFamilyInfo:(id)arg1;
- (id)initWithFamilyInfoFuture:(id)arg1;

@end
