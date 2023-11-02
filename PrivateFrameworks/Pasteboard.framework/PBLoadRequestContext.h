
@interface PBLoadRequestContext : NSObject <NSSecureCoding> {
    unsigned int  _options;
    UISPasteSharingToken * _pasteSharingToken;
}

@property (getter=isBlockingMainThread, readonly) bool blockingMainThread;
@property (readonly) bool clientHasFinishedLaunching;
@property (getter=isFromUIFramework, readonly) bool fromUIFramework;
@property (copy) UISPasteSharingToken *pasteSharingToken;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)clientHasFinishedLaunching;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(unsigned int)arg1 pasteSharingToken:(id)arg2;
- (bool)isBlockingMainThread;
- (bool)isFromUIFramework;
- (id)pasteSharingToken;
- (void)setPasteSharingToken:(id)arg1;

@end
