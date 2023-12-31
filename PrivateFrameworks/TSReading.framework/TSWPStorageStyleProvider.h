
@interface TSWPStorageStyleProvider : NSObject <TSWPStyleProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsBoldItalicUnderlineShortcuts;

+ (id)styleProviderForStorage:(id)arg1;

- (id)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;

@end
