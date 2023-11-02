
@interface PHMemoryUserFeedbackProperties : PHMemoryPropertySet {
    PHUserFeedback * _userFeedback;
}

@property (nonatomic, readonly) PHUserFeedback *userFeedback;

+ (id)entityName;
+ (bool)isToMany;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertiesToSortBy;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 memory:(id)arg2 prefetched:(bool)arg3;
- (id)userFeedback;

@end
