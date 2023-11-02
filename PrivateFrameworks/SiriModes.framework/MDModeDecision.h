
@interface MDModeDecision : NSObject {
    unsigned long long  _currentMode;
}

@property (nonatomic, readonly) unsigned long long currentMode;

- (unsigned long long)currentMode;
- (id)initWithMode:(unsigned long long)arg1;

@end
