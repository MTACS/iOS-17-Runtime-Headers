
@interface WTFContextualizedNSString : NSString {
    struct StringView { 
        void *m_characters; 
        unsigned int m_length; 
        bool m_is8Bit; 
    }  contents;
    struct StringView { 
        void *m_characters; 
        unsigned int m_length; 
        bool m_is8Bit; 
    }  context;
}

- (id).cxx_construct;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithContext:(struct StringView { void *x1; unsigned int x2; bool x3; })arg1 contents:(struct StringView { void *x1; unsigned int x2; bool x3; })arg2;
- (unsigned long long)length;

@end
