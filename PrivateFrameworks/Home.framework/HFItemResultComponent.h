
@interface HFItemResultComponent : NSObject {
    long long  _componentPriority;
}

@property (nonatomic, readonly) long long componentPriority;
@property (nonatomic, readonly, copy) NSDictionary *results;

+ (id)combinedResultsForComponents:(id)arg1;

- (long long)componentPriority;
- (id)results;

@end
