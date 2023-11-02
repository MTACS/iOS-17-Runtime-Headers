
@interface SBRebootContext : NSObject <NSCopying> {
    bool  _fromOTASoftwareUpdate;
    bool  _isDark;
    NSString * _reason;
}

@property (getter=isDark, nonatomic) bool dark;
@property (nonatomic, readonly, copy) NSString *reason;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithReason:(id)arg1;
- (bool)isDark;
- (bool)isEqual:(id)arg1;
- (id)reason;
- (void)setDark:(bool)arg1;

@end
