
@interface RBDecodedFontMetadata : NSObject {
    struct cf_ptr<const __CFDictionary *> { 
        struct __CFDictionary {} *_p; 
    }  _glyph_map;
    struct cf_ptr<const __CFString *> { 
        struct __CFString {} *_p; 
    }  _uid;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
