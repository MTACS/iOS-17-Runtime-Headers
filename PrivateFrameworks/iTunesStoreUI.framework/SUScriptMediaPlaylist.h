
@interface SUScriptMediaPlaylist : SUScriptMediaItemCollection

@property (nonatomic, readonly) MPMediaPlaylist *nativePlaylist;

+ (void)initialize;
+ (unsigned long long)nativePlaylistAttributesForScriptPlaylistAttributes:(id)arg1;
+ (id)scriptPlaylistAttributesForNativePlaylistAttributes:(unsigned long long)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)nativePlaylist;
- (id)valueForProperty:(id)arg1;

@end
