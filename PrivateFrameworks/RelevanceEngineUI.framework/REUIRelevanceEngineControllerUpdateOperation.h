
@interface REUIRelevanceEngineControllerUpdateOperation : REElementUpdateOperation {
    unsigned long long  _updateType;
}

@property (nonatomic, readonly) unsigned long long updateType;

+ (id)hideElement:(id)arg1 atPath:(id)arg2;
+ (id)showElement:(id)arg1 atPath:(id)arg2;

- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)updateType;

@end
