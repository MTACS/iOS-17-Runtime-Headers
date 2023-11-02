
@interface _CNVirtualFile : NSObject {
    NSData * _contents;
    NSMutableDictionary * _extendedAttributes;
}

@property (copy) NSData *contents;
@property (readonly) NSMutableDictionary *extendedAttributes;

- (void).cxx_destruct;
- (id)contents;
- (id)extendedAttributes;
- (id)init;
- (void)setContents:(id)arg1;

@end
