
@interface FSFCallKitUtil : NSObject {
    CXCallObserver * _callCenter;
}

@property (nonatomic, readonly) CXCallObserver *callCenter;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)callCenter;
- (id)init;
- (bool)isOnCall;

@end
