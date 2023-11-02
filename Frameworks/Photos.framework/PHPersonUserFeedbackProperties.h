
@interface PHPersonUserFeedbackProperties : PHPersonPropertySet {
    NSOrderedSet * _autonamingUserFeedbacks;
    PHUserFeedback * _userFeedback;
}

@property (nonatomic, readonly) NSOrderedSet *autonamingUserFeedbacks;
@property (nonatomic, readonly) PHUserFeedback *userFeedback;

+ (id)entityName;
+ (bool)isToMany;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertiesToSortBy;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)autonamingUserFeedbacks;
- (id)initWithFetchDictionary:(id)arg1 person:(id)arg2 prefetched:(bool)arg3;
- (id)userFeedback;

@end
