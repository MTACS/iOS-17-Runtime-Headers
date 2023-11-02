
@interface CNUIStringUtilities : NSObject

+ (long long)composedCharacterCountForString:(id)arg1;
+ (long long)composedCharacterCountForString:(id)arg1 containsEmoji:(bool*)arg2;
+ (bool)stringContainsEmoji:(id)arg1;
+ (bool)stringIsSingleEmoji:(id)arg1;

@end
