
@interface SAUILayoutModePreference : NSObject <SAUILayoutModePreferring> {
    long long  _layoutModeChangeReason;
    long long  _preferredLayoutMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long layoutModeChangeReason;
@property (nonatomic, readonly) long long preferredLayoutMode;
@property (readonly) Class superclass;

- (id)description;
- (id)initWithPreferredLayoutMode:(long long)arg1 reason:(long long)arg2;
- (long long)layoutModeChangeReason;
- (long long)preferredLayoutMode;

@end
