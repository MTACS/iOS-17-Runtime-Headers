
@interface CPLDiffTracker : NSObject {
    NSMutableSet * _differingProperties;
    bool  _objectsAreTotallyDifferent;
    bool  _shouldCompareAllProperties;
}

@property (nonatomic, readonly) NSSet *differingProperties;
@property (nonatomic, readonly) bool objectsAreTotallyDifferent;
@property (nonatomic) bool shouldCompareAllProperties;

- (void).cxx_destruct;
- (bool)areObjectsDifferentOnProperty:(id)arg1;
- (id)description;
- (id)differingProperties;
- (void)noteObjectAreTotallyDifferent;
- (void)noteObjectsDifferOnProperty:(id)arg1;
- (bool)objectsAreTotallyDifferent;
- (id)redactedDescription;
- (void)setShouldCompareAllProperties:(bool)arg1;
- (bool)shouldCompareAllProperties;

@end
