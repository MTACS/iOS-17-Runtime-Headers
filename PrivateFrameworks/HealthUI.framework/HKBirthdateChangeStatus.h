
@interface HKBirthdateChangeStatus : NSObject {
    long long  _newAge;
    bool  _shouldShowWarning;
    bool  _success;
}

@property (nonatomic) long long newAge;
@property (nonatomic) bool shouldShowWarning;
@property (nonatomic) bool success;

- (long long)newAge;
- (void)setNewAge:(long long)arg1;
- (void)setShouldShowWarning:(bool)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)shouldShowWarning;
- (bool)success;

@end
