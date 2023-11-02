
@interface PGContextualOptions : NSObject {
    NSArray * _contextualRules;
    NSDate * _localToday;
    NSDateComponents * _localTodayComponents;
}

@property (nonatomic, retain) NSDate *localToday;
@property (nonatomic, retain) NSDateComponents *localTodayComponents;

- (void).cxx_destruct;
- (id)availableContextualRules;
- (id)initWithGraph:(id)arg1 photoLibrary:(id)arg2 curationManager:(id)arg3 options:(id)arg4 loggingConnection:(id)arg5;
- (id)localToday;
- (id)localTodayComponents;
- (void)setLocalToday:(id)arg1;
- (void)setLocalTodayComponents:(id)arg1;

@end
