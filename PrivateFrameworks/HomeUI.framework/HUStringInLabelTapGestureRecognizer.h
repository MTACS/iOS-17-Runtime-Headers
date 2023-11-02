
@interface HUStringInLabelTapGestureRecognizer : UITapGestureRecognizer {
    NSString * _hitboxString;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) NSString *hitboxString;
@property (nonatomic, readonly) NSDictionary *userInfo;

- (void).cxx_destruct;
- (bool)_didTapAttributedTextInLabel:(id)arg1 targetRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 event:(id)arg3;
- (id)hitboxString;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 hitBoxString:(id)arg3 userInfo:(id)arg4;
- (void)setHitboxString:(id)arg1;
- (bool)shouldReceiveEvent:(id)arg1;
- (id)userInfo;

@end
