
@interface NSATSLineFragment : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterRange;
    long long  _elasticCharIndex;
    double  _elasticRangeWidth;
    struct { 
        unsigned int _directionState : 2; 
        unsigned int _drawsOutside : 1; 
        unsigned int _standaloneAttachment : 1; 
        unsigned int _wrappedByCluster : 1; 
        unsigned int _reserved : 27; 
    }  _flags;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _glyphRange;
    unsigned int  _hyphenGlyph;
    double  _hyphenGlyphWidth;
    void * _line;
    double  _maxPosition;
    double  _minPosition;
    NSATSTypesetter * _typesetter;
}

- (void)dealloc;
- (void)finalize;

@end
