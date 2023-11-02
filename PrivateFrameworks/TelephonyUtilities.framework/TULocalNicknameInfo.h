
@interface TULocalNicknameInfo : NSObject

@property (nonatomic, readonly, copy) NSString *shortNickname;

- (id)appleTVNicknameForDeviceName:(id)arg1;
- (id)formattedDisplayNameForIMNickname:(id)arg1 style:(long long)arg2;
- (id)init;
- (id)nicknameWithFormatterStyle:(long long)arg1;
- (id)shortNickname;

@end
