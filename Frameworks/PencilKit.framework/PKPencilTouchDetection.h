
@interface PKPencilTouchDetection : NSObject {
    <PKPencilTouchDetectionDelegate> * _delegate;
}

@property (nonatomic) <PKPencilTouchDetectionDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)didUpdateWithUserInfo:(id)arg1;
- (id)init;
- (void)pencilType:(long long)arg1 hasRecentlyBeenUsedWithCompletionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
