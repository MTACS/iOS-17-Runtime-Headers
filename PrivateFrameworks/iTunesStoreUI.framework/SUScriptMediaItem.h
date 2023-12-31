
@interface SUScriptMediaItem : SUScriptObject

@property (nonatomic, readonly) MPMediaItem *nativeItem;

+ (id)copyScriptMediaTypesForNativeMediaTypes:(unsigned long long)arg1;
+ (void)initialize;
+ (unsigned long long)nativeMediaTypesForScriptMediaTypes:(id)arg1;
+ (id)scriptMediaTypeForNativeMediaType:(unsigned long long)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)imageURLWithWidth:(id)arg1 height:(id)arg2;
- (id)nativeItem;
- (id)valueForProperty:(id)arg1;

@end
