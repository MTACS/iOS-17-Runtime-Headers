
@interface _UIKeyboardArbiter_ForSpringBoard : NSObject {
    _UIKeyboardArbiterHost * _arbiterHost;
}

@property (nonatomic, retain) _UIKeyboardArbiterHost *arbiterHost;

+ (id)forwardingTargetForSelector:(SEL)arg1;

- (void).cxx_destruct;
- (id)arbiterHost;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (void)setArbiterHost:(id)arg1;

@end
