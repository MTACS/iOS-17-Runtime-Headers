
@interface WKDOMTextIterator : NSObject {
    struct unique_ptr<WebCore::TextIterator, std::default_delete<WebCore::TextIterator>> { 
        struct __compressed_pair<WebCore::TextIterator *, std::default_delete<WebCore::TextIterator>> { 
            struct TextIterator {} *__value_; 
        } __ptr_; 
    }  _textIterator;
    struct Vector<unsigned short, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        unsigned short *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _upconvertedText;
}

@property (readonly) bool atEnd;
@property (readonly) WKDOMRange *currentRange;
@property (readonly) unsigned long long currentTextLength;
@property (readonly) const unsigned short*currentTextPointer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)advance;
- (bool)atEnd;
- (id)currentRange;
- (unsigned long long)currentTextLength;
- (const unsigned short*)currentTextPointer;
- (id)initWithRange:(id)arg1;

@end
