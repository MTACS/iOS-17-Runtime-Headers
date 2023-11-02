
@interface SKBitmapFont : NSObject <NSSecureCoding> {
    double  _baseLine;
    struct map<unsigned short, double, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, double>>> { 
        struct __tree<std::__value_type<unsigned short, double>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, double>, std::less<unsigned short>>, std::allocator<std::__value_type<unsigned short, double>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned short, double>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, double>, std::less<unsigned short>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _characterAdvanceByChar;
    struct map<unsigned int, double, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, double>>> { 
        struct __tree<std::__value_type<unsigned int, double>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, double>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, double>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, double>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, double>, std::less<unsigned int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _characterKerningByCharPair;
    struct map<unsigned short, SKSpriteNode *, std::less<unsigned short>, std::allocator<std::pair<const unsigned short, SKSpriteNode *>>> { 
        struct __tree<std::__value_type<unsigned short, SKSpriteNode *>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, SKSpriteNode *>, std::less<unsigned short>>, std::allocator<std::__value_type<unsigned short, SKSpriteNode *>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned short, SKSpriteNode *>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, SKSpriteNode *>, std::less<unsigned short>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _characterSpriteByChar;
    NSArray * _characterSprites;
    NSString * _fileName;
    NSString * _filePath;
    NSString * _fontName;
    bool  _internal;
    double  _lineHeight;
}

+ (id)_fontForFileNamed:(id)arg1;
+ (id)fontForFileNamed:(id)arg1;
+ (id)fontWithTexture:(id)arg1 fontDataString:(id)arg2;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)advanceForCharacterNamed:(unsigned short)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fontName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)kerningForCharacterNamed:(unsigned short)arg1 followedBy:(unsigned short)arg2;
- (double)lineHeight;
- (bool)loadFontWithTexture:(id)arg1 fontDataString:(id)arg2;
- (id)spriteForCharacterNamed:(unsigned short)arg1;

@end
