
@interface VKIconModifiers : NSObject {
    unsigned long long  _countryCode;
    bool  _elevated;
    struct IconModifiers { 
        bool _isClusterIcon; 
        bool _isGlyphHidden; 
        bool _isGlyphOnly; 
        bool _isInfoOnly; 
        bool _isMirrored; 
        bool _isLandmark; 
        bool _isSelected; 
        bool _useBalloonShape; 
        float _opacity; 
        float _scale; 
        struct optional<float> { 
            bool _hasValue; 
            union ValueUnion { 
                unsigned char data[4]; 
                float type; 
            } _value; 
        } _pathScale; 
        unsigned char _component; 
        struct optional<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>> { 
            bool _hasValue; 
            union ValueUnion { 
                unsigned char data[4]; 
                struct Color<unsigned char, 4, geo::ColorSpace::sRGB> { 
                    struct Matrix<unsigned char, 4, 1> { 
                        unsigned char _e[4]; 
                    } _backing; 
                } type; 
            } _value; 
        } _customColor; 
        struct optional<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>> { 
            bool _hasValue; 
            union ValueUnion { 
                unsigned char data[4]; 
                struct Color<unsigned char, 4, geo::ColorSpace::sRGB> { 
                    struct Matrix<unsigned char, 4, 1> { 
                        unsigned char _e[4]; 
                    } _backing; 
                } type; 
            } _value; 
        } _shapeColor; 
        struct optional<float> { 
            bool _hasValue; 
            union ValueUnion { 
                unsigned char data[4]; 
                float type; 
            } _value; 
        } _fontSize; 
        struct optional<float> { 
            bool _hasValue; 
            union ValueUnion { 
                unsigned char data[4]; 
                float type; 
            } _value; 
        } _tailDirection; 
        struct optional<std::string> { 
            bool _hasValue; 
            union ValueUnion { 
                unsigned char data[24]; 
                struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                        struct __rep { 
                            union { 
                                struct __long { 
                                    char *__data_; 
                                    unsigned long long __size_; 
                                    unsigned int __cap_ : 63; 
                                    unsigned int __is_long_ : 1; 
                                } __l; 
                                struct __short { 
                                    BOOL __data_[23]; 
                                    unsigned char __padding_[0]; 
                                    unsigned int __size_ : 7; 
                                    unsigned int __is_long_ : 1; 
                                } __s; 
                                struct __raw { 
                                    unsigned long long __words[3]; 
                                } __r; 
                            } ; 
                        } __value_; 
                    } __r_; 
                } type; 
            } _value; 
        } _textLocale; 
        struct map<unsigned short, std::string, std::less<unsigned short>, geo::StdAllocator<std::pair<const unsigned short, std::string>, grl::Allocator>> { 
            struct __tree<std::__value_type<unsigned short, std::string>, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, std::string>, std::less<unsigned short>>, geo::StdAllocator<std::__value_type<unsigned short, std::string>, grl::Allocator>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, geo::StdAllocator<std::__tree_node<std::__value_type<unsigned short, std::string>, void *>, grl::Allocator>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                    struct StdAllocator<std::__tree_node<std::__value_type<unsigned short, std::string>, void *>, grl::Allocator> { 
                        struct Allocator {} *_allocator; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned short, std::__value_type<unsigned short, std::string>, std::less<unsigned short>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _text; 
        struct vector<unsigned int, std::allocator<unsigned int>> { 
            unsigned int *__begin_; 
            unsigned int *__end_; 
            struct __compressed_pair<unsigned int *, std::allocator<unsigned int>> { 
                unsigned int *__value_; 
            } __end_cap_; 
        } _clusterIconValues; 
        struct vector<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>, std::allocator<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB> *, std::allocator<geo::Color<unsigned char, 4, geo::ColorSpace::sRGB>>> { 
                void *__value_; 
            } __end_cap_; 
        } _clusterColors; 
        struct function<CGImage *(gm::Matrix<unsigned int, 2, 1>, float)>="__f_"{__value_func<CGImage *(gm::Matrix<unsigned int, 2, 1>, float)>="__buf_"{type="__lx"[24C] {} _imageDataProvider; 
        void *__f_; 
    }  _iconModifiers;
    bool  _interactive;
    bool  _navMode;
    bool  _nightMode;
    bool  _searchResult;
    unsigned long long  _secondaryVariant;
    bool  _transitMode;
    unsigned long long  _variant;
    long long  _zoom;
}

@property (nonatomic) unsigned long long countryCode;
@property (nonatomic) bool elevated;
@property (nonatomic) bool interactive;
@property (nonatomic) bool navMode;
@property (nonatomic) bool nightMode;
@property (getter=isSearchResult, nonatomic) bool searchResult;
@property (nonatomic) unsigned long long secondaryVariant;
@property (nonatomic) bool transitMode;
@property (nonatomic) unsigned long long variant;
@property (nonatomic) long long zoom;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)countryCode;
- (void*)cppModifiers;
- (bool)elevated;
- (id)init;
- (id)initWithModifiers:(const void*)arg1;
- (bool)interactive;
- (bool)isSearchResult;
- (bool)navMode;
- (bool)nightMode;
- (unsigned long long)secondaryVariant;
- (void)setCountryCode:(unsigned long long)arg1;
- (void)setElevated:(bool)arg1;
- (void)setGlyphOnly:(bool)arg1;
- (void)setInteractive:(bool)arg1;
- (void)setNavMode:(bool)arg1;
- (void)setNightMode:(bool)arg1;
- (void)setSearchResult:(bool)arg1;
- (void)setSecondaryVariant:(unsigned long long)arg1;
- (void)setText:(id)arg1;
- (void)setTransitLineColor:(struct { float x1; float x2; float x3; float x4; })arg1;
- (void)setTransitMode:(bool)arg1;
- (void)setVariant:(unsigned long long)arg1;
- (void)setZoom:(long long)arg1;
- (bool)transitMode;
- (unsigned long long)variant;
- (long long)zoom;

@end
