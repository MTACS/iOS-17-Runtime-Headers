
@interface WFSiriExecutionMetrics : NSObject {
    unsigned long long  _currentShortcutStep;
    unsigned long long  _shortcutActionCount;
    unsigned long long  _siriInteractionCount;
}

@property (nonatomic) unsigned long long currentShortcutStep;
@property (nonatomic) unsigned long long shortcutActionCount;
@property (nonatomic) unsigned long long siriInteractionCount;

- (unsigned long long)currentShortcutStep;
- (id)init;
- (void)setCurrentShortcutStep:(unsigned long long)arg1;
- (void)setShortcutActionCount:(unsigned long long)arg1;
- (void)setSiriInteractionCount:(unsigned long long)arg1;
- (unsigned long long)shortcutActionCount;
- (unsigned long long)siriInteractionCount;

@end
