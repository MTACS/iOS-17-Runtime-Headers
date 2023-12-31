
@interface SUScriptFacebookLikeStatus : SUScriptObject {
    NSDictionary * _dictionary;
}

@property (readonly) unsigned long long friendLikeCount;
@property (readonly) NSArray *friends;
@property (readonly) unsigned long long globalLikeCount;
@property (getter=isLikedByMe, readonly) id likedByMe;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;

- (id)_className;
- (id)attributeKeys;
- (void)dealloc;
- (unsigned long long)friendLikeCount;
- (id)friends;
- (unsigned long long)globalLikeCount;
- (id)initWithLikeStatusDictionary:(id)arg1;
- (id)isLikedByMe;
- (id)scriptAttributeKeys;

@end
