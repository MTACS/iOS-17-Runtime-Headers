
@interface CBExtendedDisplayMitigation : NSObject {
    bool  _isActive;
    NSObject<OS_os_log> * _logHandle;
}

@property (nonatomic, readonly) bool isActive;

+ (bool)isSupported;

- (void)dealloc;
- (float)getCap;
- (id)init;
- (bool)isActive;
- (bool)setActive:(bool)arg1;

@end
