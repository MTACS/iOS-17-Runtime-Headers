
@interface TUUIContext : NSObject <NSSecureCoding> {
    unsigned long long  _inCallUIState;
}

@property (getter=isFullScreen, nonatomic, readonly) bool fullScreen;
@property (nonatomic) unsigned long long inCallUIState;
@property (getter=isMicIndicatorVisible, nonatomic, readonly) bool isMicIndicatorVisible;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)inCallUIState;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(unsigned long long)arg1;
- (bool)isFullScreen;
- (bool)isMicIndicatorVisible;
- (void)setInCallUIState:(unsigned long long)arg1;

@end
