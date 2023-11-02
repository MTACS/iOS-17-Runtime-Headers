
@interface ATXPosterEdit : NSObject <NSCopying, NSSecureCoding> {
    bool  _didLockscreenHaveWidgetsBeforeEdit;
    long long  _duration;
    NSString * _entryPoint;
    NSString * _lockscreenId;
    bool  _newlyCreated;
    NSString * _outcome;
    long long  _secondsSinceLastEdit;
    bool  _userChangedColor;
    bool  _userChangedFont;
    bool  _userChangedNumberingSystem;
    bool  _userChangedPosterContent;
    bool  _userChangedWidgets;
}

@property (nonatomic, readonly) bool didLockscreenHaveWidgetsBeforeEdit;
@property (nonatomic, readonly) long long duration;
@property (nonatomic, readonly, copy) NSString *entryPoint;
@property (nonatomic, readonly, copy) NSString *lockscreenId;
@property (getter=isNewlyCreated, nonatomic, readonly) bool newlyCreated;
@property (nonatomic, readonly, copy) NSString *outcome;
@property (nonatomic, readonly) long long secondsSinceLastEdit;
@property (nonatomic, readonly) bool userChangedColor;
@property (nonatomic, readonly) bool userChangedFont;
@property (nonatomic, readonly) bool userChangedNumberingSystem;
@property (nonatomic, readonly) bool userChangedPosterContent;
@property (nonatomic, readonly) bool userChangedWidgets;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)didLockscreenHaveWidgetsBeforeEdit;
- (long long)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)entryPoint;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLockscreenId:(id)arg1 entryPoint:(id)arg2 newlyCreated:(bool)arg3 secondsSinceLastEdit:(long long)arg4;
- (id)initWithLockscreenId:(id)arg1 entryPoint:(id)arg2 newlyCreated:(bool)arg3 secondsSinceLastEdit:(long long)arg4 outcome:(id)arg5 userChangedColor:(bool)arg6 userChangedFont:(bool)arg7 userChangedNumberingSystem:(bool)arg8 userChangedPosterContent:(bool)arg9 userChangedWidgets:(bool)arg10 didLockscreenHaveWidgetsBeforeEdit:(bool)arg11 duration:(unsigned long long)arg12;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXPosterEdit:(id)arg1;
- (bool)isNewlyCreated;
- (id)lockscreenId;
- (id)outcome;
- (long long)secondsSinceLastEdit;
- (bool)userChangedColor;
- (bool)userChangedFont;
- (bool)userChangedNumberingSystem;
- (bool)userChangedPosterContent;
- (bool)userChangedWidgets;

@end
