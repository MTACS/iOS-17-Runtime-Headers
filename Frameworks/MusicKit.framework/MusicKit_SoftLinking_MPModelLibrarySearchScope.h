
@interface MusicKit_SoftLinking_MPModelLibrarySearchScope : NSObject {
    long long  _modelObjectType;
    MPModelLibrarySearchScope * _underlyingSearchScope;
}

@property (nonatomic, readonly) long long modelObjectType;

+ (id)_topResultsRelationshipKeyForSpecificModelObjectType:(long long)arg1;
+ (id)scopeForTopResultsWithSpecificModelObjectTypeScopes:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithUnderlyingSearchScope:(id)arg1 modelObjectType:(long long)arg2;
- (long long)_modelObjectType;
- (id)_underlyingSearchScope;
- (id)initWithModelObjectType:(long long)arg1;
- (long long)modelObjectType;

@end
