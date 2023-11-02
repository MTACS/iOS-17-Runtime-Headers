
@interface PGChildActivityMemoryTitleGenerator : PGTitleGenerator {
    NSSet * _activityLabels;
    NSString * _childName;
    NSObject<OS_os_log> * _loggingConnection;
}

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)arg1;
- (bool)_shouldIncludeChildNameForActivityLabels:(id)arg1;
- (id)initWithMomentNodes:(id)arg1 activityLabels:(id)arg2 childName:(id)arg3 titleGenerationContext:(id)arg4 loggingConnection:(id)arg5;

@end
