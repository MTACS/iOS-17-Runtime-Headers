
@interface _NAUIAutoUpdatingFontObserver : NSObject {
    id  _notificationObserver;
    id  _target;
}

@property (nonatomic, readonly) id target;

+ (bool)canObserveFontsForTarget:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTarget:(id)arg1;
- (id)target;
- (void)updateDyamicFontForCurrentContentSize;

@end
