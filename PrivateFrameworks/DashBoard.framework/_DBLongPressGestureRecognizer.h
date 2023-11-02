
@interface _DBLongPressGestureRecognizer : UILongPressGestureRecognizer {
    unsigned long long  _lastSenderID;
}

@property (nonatomic) unsigned long long lastSenderID;

- (unsigned long long)lastSenderID;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setLastSenderID:(unsigned long long)arg1;

@end
