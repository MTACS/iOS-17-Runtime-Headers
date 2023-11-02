
@interface ICInstrumentationUtilitiesRecentPasswordMode : NSObject <NSSecureCoding> {
    long long  _contextPath;
    short  _lockedNotesMode;
}

@property (nonatomic) long long contextPath;
@property (nonatomic) short lockedNotesMode;

+ (bool)supportsSecureCoding;

- (long long)contextPath;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (short)lockedNotesMode;
- (void)setContextPath:(long long)arg1;
- (void)setLockedNotesMode:(short)arg1;

@end
