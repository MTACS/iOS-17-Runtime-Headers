
@interface _WKSessionState : NSObject {
    struct SessionState { 
        struct BackForwardListState { 
            struct Vector<WebKit::BackForwardListItemState, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
                struct BackForwardListItemState {} *m_buffer; 
                unsigned int m_capacity; 
                unsigned int m_size; 
            } items; 
            struct optional<unsigned int> { 
                union { 
                    BOOL __null_state_; 
                    unsigned int __val_; 
                } ; 
                bool __engaged_; 
            } currentIndex; 
        } backForwardListState; 
        unsigned long long renderTreeSize; 
        struct URL { 
            struct String { 
                struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                    struct StringImpl {} *m_ptr; 
                } m_impl; 
            } m_string; 
            unsigned int m_isValid : 1; 
            unsigned int m_protocolIsInHTTPFamily : 1; 
            unsigned int m_cannotBeABaseURL : 1; 
            unsigned int m_portLength : 3; 
            unsigned int m_schemeEnd : 26; 
            unsigned int m_userStart; 
            unsigned int m_userEnd; 
            unsigned int m_passwordEnd; 
            unsigned int m_hostEnd; 
            unsigned int m_pathAfterLastSlash; 
            unsigned int m_pathEnd; 
            unsigned int m_queryEnd; 
        } provisionalURL; 
        bool isAppInitiated; 
    }  _sessionState;
}

@property (nonatomic, readonly, copy) NSData *data;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithSessionState:(struct SessionState { struct BackForwardListState { struct Vector<WebKit::BackForwardListItemState, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct BackForwardListItemState {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_1_1_1; struct optional<unsigned int> { union { BOOL x_1_3_1; unsigned int x_1_3_2; } x_2_2_1; bool x_2_2_2; } x_1_1_2; } x1; unsigned long long x2; struct URL { struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_3_1_1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5 : 3; unsigned int x_3_1_6 : 26; unsigned int x_3_1_7; unsigned int x_3_1_8; unsigned int x_3_1_9; unsigned int x_3_1_10; unsigned int x_3_1_11; unsigned int x_3_1_12; unsigned int x_3_1_13; } x3; bool x4; })arg1;
- (id)data;
- (id)initWithData:(id)arg1;

@end
