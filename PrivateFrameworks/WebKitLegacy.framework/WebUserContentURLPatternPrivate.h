
@interface WebUserContentURLPatternPrivate : NSObject {
    struct UserContentURLPattern { 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_scheme; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_host; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_path; 
        unsigned char m_error; 
        bool m_matchSubdomains; 
    }  pattern;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
