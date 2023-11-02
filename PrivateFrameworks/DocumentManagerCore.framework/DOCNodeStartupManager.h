
@interface DOCNodeStartupManager : NSObject {
    bool  _isStarted;
}

@property (nonatomic) bool isStarted;

+ (id)shared;

- (void)_start;
- (bool)isStarted;
- (void)setIsStarted:(bool)arg1;
- (void)startIfNeeded;

@end
