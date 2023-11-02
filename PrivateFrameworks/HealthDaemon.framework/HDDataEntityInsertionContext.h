
@interface HDDataEntityInsertionContext : NSObject {
    double  _creationDate;
    double  _defaultCreationDate;
    HDProfile * _profile;
    HDDataOriginProvenance * _provenance;
    bool  _resolveAssociations;
    bool  _skipInsertionFilter;
}

@property (nonatomic, readonly) double creationDate;
@property (nonatomic, readonly) HDDataOriginProvenance *provenance;
@property (nonatomic, readonly) bool resolveAssociations;
@property (nonatomic, readonly) bool skipInsertionFilter;

- (void).cxx_destruct;
- (double)creationDate;
- (id)initWithProvenance:(id)arg1 creationDate:(double)arg2 skipInsertionFilter:(bool)arg3 resolveAssociations:(bool)arg4 profile:(id)arg5;
- (void)prepareObjectForInsertion:(id)arg1;
- (id)provenance;
- (bool)resolveAssociations;
- (bool)skipInsertionFilter;

@end
