
@interface AEOptionMirror : NSObject {
    NSDictionary * _leftOptionsByRight;
    NSDictionary * _rightOptionsByLeft;
}

@property (nonatomic, readonly) long long leftClearMask;
@property (nonatomic, readonly) long long rightClearMask;

- (void).cxx_destruct;
- (id)initWithMirroredOptions:(id)arg1;
- (long long)leftClearMask;
- (long long)leftOptionsFromRight:(long long)arg1;
- (long long)rightClearMask;
- (long long)rightOptionsFromLeft:(long long)arg1;

@end
