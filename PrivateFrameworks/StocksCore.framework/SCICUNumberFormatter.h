
@interface SCICUNumberFormatter : NSObject

- (id)formattedCount:(long long)arg1;
- (id)formattedCount:(long long)arg1 withLocale:(id)arg2;
- (id)formattedCount:(long long)arg1 withLocale:(id)arg2 longform:(bool)arg3;
- (id)formattedCount:(long long)arg1 withLocale:(id)arg2 longform:(bool)arg3 compactDisplay:(bool)arg4;

@end
