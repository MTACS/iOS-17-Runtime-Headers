
@interface WebNotificationPrivate : NSObject {
    struct optional<WebCore::NotificationData> { 
        union { 
            BOOL __null_state_; 
            struct NotificationData { 
                struct String { 
                    struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } title; 
                struct String { 
                    struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } body; 
                struct String { 
                    struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } iconURL; 
                struct String { 
                    struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } tag; 
                struct String { 
                    struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } language; 
                unsigned char direction; 
                struct String { 
                    struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                        struct StringImpl {} *m_ptr; 
                    } m_impl; 
                } originString; 
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
                } serviceWorkerRegistrationURL; 
                struct UUID { 
                    /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*m_data; 
                } notificationID; 
                struct ProcessQualified<WTF::UUID> { 
                    struct UUID { 
                        void*m_data; 
                    } m_object; 
                    struct ObjectIdentifierGeneric<WebCore::ProcessIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
                        unsigned long long m_identifier; 
                    } m_processIdentifier; 
                } contextIdentifier; 
                struct SessionID { 
                    unsigned long long m_identifier; 
                } sourceSession; 
                struct MonotonicTime { 
                    double m_value; 
                } creationTime; 
                struct Vector<unsigned char, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
                    char *m_buffer; 
                    unsigned int m_capacity; 
                    unsigned int m_size; 
                } data; 
                struct optional<bool> { 
                    union { 
                        BOOL __null_state_; 
                        bool __val_; 
                    } ; 
                    bool __engaged_; 
                } silent; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _internal;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
