
@interface CLHidDevice : NSObject {
    HIDDevice * _hidDevice;
    NSDictionary * _matching;
}

@property (nonatomic) HIDDevice *hidDevice;
@property (nonatomic, retain) NSDictionary *matching;

- (void)dealloc;
- (id)hidDevice;
- (id)initWithHidDevice:(id)arg1 matchingDict:(id)arg2;
- (id)matching;
- (void)setHidDevice:(id)arg1;
- (void)setMatching:(id)arg1;
- (bool)setReport:(long long)arg1 payload:(char *)arg2 length:(long long)arg3;

@end
