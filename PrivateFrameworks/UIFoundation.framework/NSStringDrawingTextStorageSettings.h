
@interface NSStringDrawingTextStorageSettings : NSObject {
    struct { 
        float _hyphenationFactor; 
        struct { 
            unsigned int usesFontLeading : 1; 
            unsigned int usesScreenFonts : 1; 
            unsigned int showsInvisibleCharacters : 1; 
            unsigned int showsControlCharacters : 1; 
            unsigned int defaultAttachmentScaling : 4; 
            unsigned int typesetterBehavior : 8; 
            unsigned int reserved : 20; 
        } _flags; 
    }  _settings;
}

- (id)init;

@end
