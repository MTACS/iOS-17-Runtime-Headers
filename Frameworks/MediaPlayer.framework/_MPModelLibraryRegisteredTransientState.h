
@interface _MPModelLibraryRegisteredTransientState : NSObject {
    long long  _addState;
    long long  _favoriteState;
    long long  _keepLocalState;
    MPSectionedCollection * _modelObjects;
    MPSectionedCollection * _relatedModelObjects;
    NSUUID * _token;
}

@property (nonatomic) long long addState;
@property (nonatomic) long long favoriteState;
@property (nonatomic) long long keepLocalState;
@property (nonatomic, copy) MPSectionedCollection *modelObjects;
@property (nonatomic, copy) MPSectionedCollection *relatedModelObjects;
@property (nonatomic, copy) NSUUID *token;

- (void).cxx_destruct;
- (long long)addState;
- (long long)favoriteState;
- (long long)keepLocalState;
- (id)modelObjects;
- (id)relatedModelObjects;
- (void)setAddState:(long long)arg1;
- (void)setFavoriteState:(long long)arg1;
- (void)setKeepLocalState:(long long)arg1;
- (void)setModelObjects:(id)arg1;
- (void)setRelatedModelObjects:(id)arg1;
- (void)setToken:(id)arg1;
- (id)token;

@end
