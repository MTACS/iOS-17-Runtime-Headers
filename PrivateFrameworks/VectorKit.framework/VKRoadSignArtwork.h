
@interface VKRoadSignArtwork : NSObject {
    struct CGImage { } * _cgGlyph;
    struct vector<std::pair<CGPoint, geo::Color<float, 4, geo::ColorSpace::Linear>>, std::allocator<std::pair<CGPoint, geo::Color<float, 4, geo::ColorSpace::Linear>>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::pair<CGPoint, geo::Color<float, 4, geo::ColorSpace::Linear>> *, std::allocator<std::pair<CGPoint, geo::Color<float, 4, geo::ColorSpace::Linear>>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _debugPoints;
    struct vector<std::pair<CGRect, geo::Color<float, 4, geo::ColorSpace::Linear>>, std::allocator<std::pair<CGRect, geo::Color<float, 4, geo::ColorSpace::Linear>>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::pair<CGRect, geo::Color<float, 4, geo::ColorSpace::Linear>> *, std::allocator<std::pair<CGRect, geo::Color<float, 4, geo::ColorSpace::Linear>>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _debugRects;
    struct __CTFrame { } * _frame;
    struct __CTFramesetter { } * _framesetter;
    struct RoadSignGeneratedMetrics { 
        struct RoadSignPartMetrics { 
            unsigned char _type; 
            struct CGSize { 
                double width; 
                double height; 
            } _imageSize; 
            struct CGRect { 
                struct CGPoint { 
                    double x; 
                    double y; 
                } origin; 
                struct CGSize { 
                    double width; 
                    double height; 
                } size; 
            } _signBaseRect; 
            double _topEmptySpaceHeight; 
            double _bottomEmptySpaceHeight; 
            double _leftEmptySpaceWidth; 
            double _rightEmptySpaceWidth; 
            double _outsideImagePathExtension; 
            bool _hasArrows; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowWingMin; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowWingMax; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowTip; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowAnchor; 
        } _leftRoadSignPartMetrics; 
        struct RoadSignPartMetrics { 
            unsigned char _type; 
            struct CGSize { 
                double width; 
                double height; 
            } _imageSize; 
            struct CGRect { 
                struct CGPoint { 
                    double x; 
                    double y; 
                } origin; 
                struct CGSize { 
                    double width; 
                    double height; 
                } size; 
            } _signBaseRect; 
            double _topEmptySpaceHeight; 
            double _bottomEmptySpaceHeight; 
            double _leftEmptySpaceWidth; 
            double _rightEmptySpaceWidth; 
            double _outsideImagePathExtension; 
            bool _hasArrows; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowWingMin; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowWingMax; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowTip; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowAnchor; 
        } _rightRoadSignPartMetrics; 
        struct RoadSignPartMetrics { 
            unsigned char _type; 
            struct CGSize { 
                double width; 
                double height; 
            } _imageSize; 
            struct CGRect { 
                struct CGPoint { 
                    double x; 
                    double y; 
                } origin; 
                struct CGSize { 
                    double width; 
                    double height; 
                } size; 
            } _signBaseRect; 
            double _topEmptySpaceHeight; 
            double _bottomEmptySpaceHeight; 
            double _leftEmptySpaceWidth; 
            double _rightEmptySpaceWidth; 
            double _outsideImagePathExtension; 
            bool _hasArrows; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowWingMin; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowWingMax; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowTip; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowAnchor; 
        } _stretchedRoadSignPartMetrics; 
        struct RoadSignPartMetrics { 
            unsigned char _type; 
            struct CGSize { 
                double width; 
                double height; 
            } _imageSize; 
            struct CGRect { 
                struct CGPoint { 
                    double x; 
                    double y; 
                } origin; 
                struct CGSize { 
                    double width; 
                    double height; 
                } size; 
            } _signBaseRect; 
            double _topEmptySpaceHeight; 
            double _bottomEmptySpaceHeight; 
            double _leftEmptySpaceWidth; 
            double _rightEmptySpaceWidth; 
            double _outsideImagePathExtension; 
            bool _hasArrows; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowWingMin; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowWingMax; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowTip; 
            struct CGPoint { 
                double x; 
                double y; 
            } _arrowAnchor; 
        } _middleRoadSignPartMetrics; 
        bool _hasMiddleSignPart; 
        struct CGSize { 
            double width; 
            double height; 
        } _imageSize; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } _signBaseRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } _glyphRect; 
        double _stretchedRoadSignPartWidth; 
        struct CGPoint { 
            double x; 
            double y; 
        } _arrowTipPosition; 
        struct CGPoint { 
            double x; 
            double y; 
        } _arrowAnchorPosition; 
        struct CGPoint { 
            double x; 
            double y; 
        } _textPosition; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } _textBounds; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } _leftPartRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } _rightPartRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } _stretchedPartRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } _middlePartRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } _middleLeftStretchedPartRect; 
        struct CGRect { 
            struct CGPoint { 
                double x; 
                double y; 
            } origin; 
            struct CGSize { 
                double width; 
                double height; 
            } size; 
        } _middleRightStretchedPartRect; 
    }  _generatedMetrics;
    struct shared_ptr<md::LabelIcon> { 
        struct LabelIcon {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _glyph;
    struct _retain_ptr<VKImage *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKImage *_obj; 
        struct _retain_objc_arc { } _retain; 
        struct _release_objc_arc { } _release; 
    }  _image;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _imageLock;
    struct __CTLine { } * _line;
    struct RoadSignColoring { 
        bool _hasFillColor; 
        bool _hasGradientFillColors; 
        bool _hasGradientFillAngle; 
        bool _hasStrokeColor; 
        bool _hasInnerStrokeColor; 
        bool _hasShadowColor; 
        bool _hasTextColor; 
        bool _hasSecondaryTextColor; 
        struct Color<double, 4, geo::ColorSpace::Linear> { 
            struct Matrix<double, 4, 1> { 
                double _e[4]; 
            } _backing; 
        } _fillColor; 
        struct array<geo::Color<double, 4, geo::ColorSpace::Linear>, 2UL> { 
            struct Color<double, 4, geo::ColorSpace::Linear> { 
                struct Matrix<double, 4, 1> { 
                    double _e[4]; 
                } _backing; 
            } __elems_[2]; 
        } _gradientFillColors; 
        struct Color<double, 4, geo::ColorSpace::Linear> { 
            struct Matrix<double, 4, 1> { 
                double _e[4]; 
            } _backing; 
        } _strokeColor; 
        struct Color<double, 4, geo::ColorSpace::Linear> { 
            struct Matrix<double, 4, 1> { 
                double _e[4]; 
            } _backing; 
        } _innerStrokeColor; 
        struct Color<double, 4, geo::ColorSpace::Linear> { 
            struct Matrix<double, 4, 1> { 
                double _e[4]; 
            } _backing; 
        } _shadowColor; 
        struct Color<double, 4, geo::ColorSpace::Linear> { 
            struct Matrix<double, 4, 1> { 
                double _e[4]; 
            } _backing; 
        } _textColor; 
        struct Color<double, 4, geo::ColorSpace::Linear> { 
            struct Matrix<double, 4, 1> { 
                double _e[4]; 
            } _backing; 
        } _secondaryTextColor; 
        double _gradientFillAngle; 
    }  _signColoring;
    struct RoadSignMetrics { 
        unsigned char _orientation; 
        double _scale; 
        double _contentScale; 
        double _arrowWeight; 
        double _arrowLength; 
        double _arrowTipCornerRadius; 
        double _arrowJoinCornerRadius; 
        struct CGSize { 
            double width; 
            double height; 
        } _shadowOffset; 
        double _shadowRadius; 
        double _strokeWeight; 
        double _innerStrokeWeight; 
        double _signHeight; 
        double _signMargin; 
        double _horizontalMargin; 
        double _verticalMargin; 
        double _cornerRadius; 
        struct CGSize { 
            double width; 
            double height; 
        } _glyphSize; 
        double _glyphVerticalOffset; 
    }  _signMetrics;
    struct RoadSignTextMetrics { 
        double _scale; 
        double _contentScale; 
        double _horizontalMargin; 
        double _verticalMargin; 
        double _verticalOffset; 
        double _textSize; 
        double _secondaryTextSize; 
        struct basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>> { 
            struct __compressed_pair<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>::__rep, geo::StdAllocator<char, mdm::Allocator>> { 
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
                struct StdAllocator<char, mdm::Allocator> { 
                    struct Allocator {} *_allocator; 
                } __value_; 
            } __r_; 
        } _fontFamily; 
        struct basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>> { 
            struct __compressed_pair<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>::__rep, geo::StdAllocator<char, mdm::Allocator>> { 
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
                struct StdAllocator<char, mdm::Allocator> { 
                    struct Allocator {} *_allocator; 
                } __value_; 
            } __r_; 
        } _secondaryFontFamily; 
        double _textDrawWidth; 
        double _textWrapWidth; 
        unsigned char _maxLineCount; 
        bool _isRTL; 
    }  _textMetrics;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDebugPoint:(struct CGPoint { double x1; double x2; })arg1 color:(struct Color<float, 4, geo::ColorSpace::Linear> { struct Matrix<float, 4, 1> { float x_1_1_1[4]; } x1; })arg2;
- (void)addDebugRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(struct Color<float, 4, geo::ColorSpace::Linear> { struct Matrix<float, 4, 1> { float x_1_1_1[4]; } x1; })arg2;
- (void)dealloc;
- (const struct RoadSignGeneratedMetrics { struct RoadSignPartMetrics { unsigned char x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; bool x_1_1_9; struct CGPoint { double x_10_2_1; double x_10_2_2; } x_1_1_10; struct CGPoint { double x_11_2_1; double x_11_2_2; } x_1_1_11; struct CGPoint { double x_12_2_1; double x_12_2_2; } x_1_1_12; struct CGPoint { double x_13_2_1; double x_13_2_2; } x_1_1_13; } x1; struct RoadSignPartMetrics { unsigned char x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_3_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_3_2_2; } x_2_1_3; double x_2_1_4; double x_2_1_5; double x_2_1_6; double x_2_1_7; double x_2_1_8; bool x_2_1_9; struct CGPoint { double x_10_2_1; double x_10_2_2; } x_2_1_10; struct CGPoint { double x_11_2_1; double x_11_2_2; } x_2_1_11; struct CGPoint { double x_12_2_1; double x_12_2_2; } x_2_1_12; struct CGPoint { double x_13_2_1; double x_13_2_2; } x_2_1_13; } x2; }*)generatedMetrics;
- (const void*)glyph;
- (id)image;
- (id)initWithFramesetter:(struct __CTFramesetter { }*)arg1 signMetrics:(struct RoadSignMetrics { unsigned char x1; double x2; double x3; double x4; double x5; double x6; double x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; struct CGSize { double x_17_1_1; double x_17_1_2; } x17; double x18; })arg2 textMetrics:(struct RoadSignTextMetrics { double x1; double x2; double x3; double x4; double x5; double x6; double x7; struct basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>> { struct __compressed_pair<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>::__rep, geo::StdAllocator<char, mdm::Allocator>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned int x_1_5_3 : 63; unsigned int x_1_5_4 : 1; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; unsigned char x_2_5_2[0]; unsigned int x_2_5_3 : 7; unsigned int x_2_5_4 : 1; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; struct StdAllocator<char, mdm::Allocator> { struct Allocator {} *x_2_3_1; } x_1_2_2; } x_8_1_1; } x8; struct basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>> { struct __compressed_pair<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>::__rep, geo::StdAllocator<char, mdm::Allocator>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned int x_1_5_3 : 63; unsigned int x_1_5_4 : 1; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; unsigned char x_2_5_2[0]; unsigned int x_2_5_3 : 7; unsigned int x_2_5_4 : 1; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; struct StdAllocator<char, mdm::Allocator> { struct Allocator {} *x_2_3_1; } x_1_2_2; } x_9_1_1; } x9; })arg3 signColoring:(struct RoadSignColoring { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; struct Color<double, 4, geo::ColorSpace::Linear> { struct Matrix<double, 4, 1> { double x_1_2_1[4]; } x_9_1_1; } x9; struct array<geo::Color<double, 4, geo::ColorSpace::Linear>, 2UL> { struct Color<double, 4, geo::ColorSpace::Linear> { struct Matrix<double, 4, 1> { double x_1_3_1[4]; } x_1_2_1; } x_10_1_1[2]; } x10; struct Color<double, 4, geo::ColorSpace::Linear> { struct Matrix<double, 4, 1> { double x_1_2_1[4]; } x_11_1_1; } x11; struct Color<double, 4, geo::ColorSpace::Linear> { struct Matrix<double, 4, 1> { double x_1_2_1[4]; } x_12_1_1; } x12; struct Color<double, 4, geo::ColorSpace::Linear> { struct Matrix<double, 4, 1> { double x_1_2_1[4]; } x_13_1_1; } x13; struct Color<double, 4, geo::ColorSpace::Linear> { struct Matrix<double, 4, 1> { double x_1_2_1[4]; } x_14_1_1; } x14; struct Color<double, 4, geo::ColorSpace::Linear> { struct Matrix<double, 4, 1> { double x_1_2_1[4]; } x_15_1_1; } x15; double x16; })arg4 glyph:(const void*)arg5 cgGlyph:(struct CGImage { }*)arg6;
- (id)initWithLine:(struct __CTLine { }*)arg1 signMetrics:(struct RoadSignMetrics { unsigned char x1; double x2; double x3; double x4; double x5; double x6; double x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; struct CGSize { double x_17_1_1; double x_17_1_2; } x17; double x18; })arg2 textMetrics:(struct RoadSignTextMetrics { double x1; double x2; double x3; double x4; double x5; double x6; double x7; struct basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>> { struct __compressed_pair<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>::__rep, geo::StdAllocator<char, mdm::Allocator>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned int x_1_5_3 : 63; unsigned int x_1_5_4 : 1; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; unsigned char x_2_5_2[0]; unsigned int x_2_5_3 : 7; unsigned int x_2_5_4 : 1; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; struct StdAllocator<char, mdm::Allocator> { struct Allocator {} *x_2_3_1; } x_1_2_2; } x_8_1_1; } x8; struct basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>> { struct __compressed_pair<std::basic_string<char, std::char_traits<char>, geo::StdAllocator<char, mdm::Allocator>>::__rep, geo::StdAllocator<char, mdm::Allocator>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned int x_1_5_3 : 63; unsigned int x_1_5_4 : 1; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; unsigned char x_2_5_2[0]; unsigned int x_2_5_3 : 7; unsigned int x_2_5_4 : 1; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; struct StdAllocator<char, mdm::Allocator> { struct Allocator {} *x_2_3_1; } x_1_2_2; } x_9_1_1; } x9; })arg3 signColoring:(struct RoadSignColoring { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; struct Color<double, 4, geo::ColorSpace::Linear> { struct Matrix<double, 4, 1> { double x_1_2_1[4]; } x_9_1_1; } x9; struct array<geo::Color<double, 4, geo::ColorSpace::Linear>, 2UL> { struct Color<double, 4, geo::ColorSpace::Linear> { struct Matrix<double, 4, 1> { double x_1_3_1[4]; } x_1_2_1; } x_10_1_1[2]; } x10; struct Color<double, 4, geo::ColorSpace::Linear> { struct Matrix<double, 4, 1> { double x_1_2_1[4]; } x_11_1_1; } x11; struct Color<double, 4, geo::ColorSpace::Linear> { struct Matrix<double, 4, 1> { double x_1_2_1[4]; } x_12_1_1; } x12; struct Color<double, 4, geo::ColorSpace::Linear> { struct Matrix<double, 4, 1> { double x_1_2_1[4]; } x_13_1_1; } x13; struct Color<double, 4, geo::ColorSpace::Linear> { struct Matrix<double, 4, 1> { double x_1_2_1[4]; } x_14_1_1; } x14; struct Color<double, 4, geo::ColorSpace::Linear> { struct Matrix<double, 4, 1> { double x_1_2_1[4]; } x_15_1_1; } x15; double x16; })arg4 glyph:(const void*)arg5 cgGlyph:(struct CGImage { }*)arg6;
- (struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; })localCollisionBounds;
- (struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; })localRenderBounds;
- (struct Box<float, 2> { struct Matrix<float, 2, 1> { float x_1_1_1[2]; } x1; struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; })localSignBounds;
- (struct Matrix<float, 2, 1> { float x1[2]; })offsetPixelForPixel:(struct Matrix<float, 2, 1> { float x1[2]; })arg1;
- (const void*)textMetrics;

@end
