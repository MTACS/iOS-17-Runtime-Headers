
@interface NSRTFWriter : NSObject {
    NSMapTable * _attachmentData;
    NSAttributedString * _attrString;
    unsigned long long  _attrStringLength;
    NSMutableDictionary * _colors;
    id  _curBackgroundColor;
    id  _curBaselineOffset;
    unsigned int  _curEncoding;
    id  _curFont;
    id  _curForegroundColor;
    id  _curKern;
    id  _curParagraphStyle;
    id  _curSuperscript;
    int  _curTraits;
    id  _curUnderlineStyle;
    NSDictionary * _docAttrs;
    NSFileWrapper * _document;
    NSMutableDictionary * _fontNames;
    NSMutableDictionary * _fontObjects;
    NSMutableArray * _indexedColors;
    void * _layoutSections;
    NSMutableArray * _listRanges;
    NSMutableData * _output;
    double  _rightMargin;
    struct { 
        unsigned int _forceColorWrite : 1; 
        unsigned int _activeFontFeatures : 1; 
        unsigned int _activeFontPalette : 1; 
        unsigned int _activeFontPaletteColors : 1; 
        unsigned int _preserveNaturalAlignment : 1; 
        unsigned int _textScalingNeedsConvert : 1; 
        unsigned int _wroteCocoaVersion : 1; 
        unsigned int _reserved : 25; 
    }  _rwFlags;
    long long  _textScalingConversionSource;
    long long  _textScalingConversionTarget;
}

+ (void)initialize;

- (void)dealloc;

@end
