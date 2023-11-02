
@interface WebTextIteratorPrivate : NSObject {
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

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;

@end
