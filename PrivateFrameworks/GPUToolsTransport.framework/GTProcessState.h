
@interface GTProcessState : NSObject {
    bool  _isSuspended;
}

@property bool isSuspended;

- (bool)isSuspended;
- (void)setIsSuspended:(bool)arg1;

@end
