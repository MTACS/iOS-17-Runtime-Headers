
@interface ATXInformationHeuristicRefreshTrigger : NSObject <NSSecureCoding> {
    <ATXInformationHeuristicRefreshTriggerDelegate> * _delegate;
    NSMutableSet * _registeredHeuristics;
}

@property (nonatomic) <ATXInformationHeuristicRefreshTriggerDelegate> *delegate;
@property (nonatomic, readonly) NSSet *registeredHeuristics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_safeDecodeObjectOfClass:(Class)arg1 forKey:(id)arg2 withCoder:(id)arg3 nonNull:(bool)arg4;
- (id)_safeDecodeObjectOfClasses:(id)arg1 forKey:(id)arg2 withCoder:(id)arg3 nonNull:(bool)arg4;
- (void)_start;
- (void)_stop;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)registeredHeuristics;
- (void)setDelegate:(id)arg1;
- (void)startTriggeringRefreshForHeuristicIfNotAlready:(id)arg1;
- (void)stopTriggeringRefreshForAllHeuristics;
- (void)stopTriggeringRefreshForHeuristicIfAlready:(id)arg1;

@end
