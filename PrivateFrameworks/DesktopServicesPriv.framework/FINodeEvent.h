
@interface FINodeEvent : NSObject {
    struct TNodeEvent { 
        unsigned int fEventKind; 
        FINode *fFINode; 
        unsigned int fProperty; 
        struct TPropertyValue { 
            struct variant<std::monostate, bool, unsigned char, short, int, long long, unsigned int, double, Point, Blob, NSObject *, TString, TRef<const __CFString *>, TRef<const __CFNumber *>, TRef<const __CFData *>, TRef<const __CFDictionary *>, TRef<const __CFURL *>, TRef<const __CFArray *>, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                struct __impl<std::monostate, bool, unsigned char, short, int, long long, unsigned int, double, Point, Blob, NSObject *, TString, TRef<const __CFString *>, TRef<const __CFNumber *>, TRef<const __CFData *>, TRef<const __CFDictionary *>, TRef<const __CFURL *>, TRef<const __CFArray *>, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                    union __union<std::__variant_detail::_Trait::_Available, 0UL, std::monostate, bool, unsigned char, short, int, long long, unsigned int, double, Point, Blob, NSObject *, TString, TRef<const __CFString *>, TRef<const __CFNumber *>, TRef<const __CFData *>, TRef<const __CFDictionary *>, TRef<const __CFURL *>, TRef<const __CFArray *>, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                        BOOL __dummy; 
                        struct __alt<0UL, std::monostate> { 
                            struct monostate { } __value; 
                        } __head; 
                        union __union<std::__variant_detail::_Trait::_Available, 1UL, bool, unsigned char, short, int, long long, unsigned int, double, Point, Blob, NSObject *, TString, TRef<const __CFString *>, TRef<const __CFNumber *>, TRef<const __CFData *>, TRef<const __CFDictionary *>, TRef<const __CFURL *>, TRef<const __CFArray *>, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                            BOOL __dummy; 
                            struct __alt<1UL, bool> { 
                                bool __value; 
                            } __head; 
                            union __union<std::__variant_detail::_Trait::_Available, 2UL, unsigned char, short, int, long long, unsigned int, double, Point, Blob, NSObject *, TString, TRef<const __CFString *>, TRef<const __CFNumber *>, TRef<const __CFData *>, TRef<const __CFDictionary *>, TRef<const __CFURL *>, TRef<const __CFArray *>, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                BOOL __dummy; 
                                struct __alt<2UL, unsigned char> { 
                                    unsigned char __value; 
                                } __head; 
                                union __union<std::__variant_detail::_Trait::_Available, 3UL, short, int, long long, unsigned int, double, Point, Blob, NSObject *, TString, TRef<const __CFString *>, TRef<const __CFNumber *>, TRef<const __CFData *>, TRef<const __CFDictionary *>, TRef<const __CFURL *>, TRef<const __CFArray *>, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                    BOOL __dummy; 
                                    struct __alt<3UL, short> { 
                                        short __value; 
                                    } __head; 
                                    union __union<std::__variant_detail::_Trait::_Available, 4UL, int, long long, unsigned int, double, Point, Blob, NSObject *, TString, TRef<const __CFString *>, TRef<const __CFNumber *>, TRef<const __CFData *>, TRef<const __CFDictionary *>, TRef<const __CFURL *>, TRef<const __CFArray *>, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                        BOOL __dummy; 
                                        struct __alt<4UL, int> { 
                                            int __value; 
                                        } __head; 
                                        union __union<std::__variant_detail::_Trait::_Available, 5UL, long long, unsigned int, double, Point, Blob, NSObject *, TString, TRef<const __CFString *>, TRef<const __CFNumber *>, TRef<const __CFData *>, TRef<const __CFDictionary *>, TRef<const __CFURL *>, TRef<const __CFArray *>, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                            BOOL __dummy; 
                                            struct __alt<5UL, long long> { 
                                                long long __value; 
                                            } __head; 
                                            union __union<std::__variant_detail::_Trait::_Available, 6UL, unsigned int, double, Point, Blob, NSObject *, TString, TRef<const __CFString *>, TRef<const __CFNumber *>, TRef<const __CFData *>, TRef<const __CFDictionary *>, TRef<const __CFURL *>, TRef<const __CFArray *>, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                                BOOL __dummy; 
                                                struct __alt<6UL, unsigned int> { 
                                                    unsigned int __value; 
                                                } __head; 
                                                union __union<std::__variant_detail::_Trait::_Available, 7UL, double, Point, Blob, NSObject *, TString, TRef<const __CFString *>, TRef<const __CFNumber *>, TRef<const __CFData *>, TRef<const __CFDictionary *>, TRef<const __CFURL *>, TRef<const __CFArray *>, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                                    BOOL __dummy; 
                                                    struct __alt<7UL, double> { 
                                                        double __value; 
                                                    } __head; 
                                                    union __union<std::__variant_detail::_Trait::_Available, 8UL, Point, Blob, NSObject *, TString, TRef<const __CFString *>, TRef<const __CFNumber *>, TRef<const __CFData *>, TRef<const __CFDictionary *>, TRef<const __CFURL *>, TRef<const __CFArray *>, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                                        BOOL __dummy; 
                                                        struct __alt<8UL, Point> { 
                                                            struct Point { 
                                                                short v; 
                                                                short h; 
                                                            } __value; 
                                                        } __head; 
                                                        union __union<std::__variant_detail::_Trait::_Available, 9UL, Blob, NSObject *, TString, TRef<const __CFString *>, TRef<const __CFNumber *>, TRef<const __CFData *>, TRef<const __CFDictionary *>, TRef<const __CFURL *>, TRef<const __CFArray *>, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                                            BOOL __dummy; 
                                                            struct __alt<9UL, Blob> { 
                                                                struct Blob { 
                                                                    unsigned int capacity; 
                                                                    unsigned int length; 
                                                                    char *buffer; 
                                                                } __value; 
                                                            } __head; 
                                                            union __union<std::__variant_detail::_Trait::_Available, 10UL, NSObject *, TString, TRef<const __CFString *>, TRef<const __CFNumber *>, TRef<const __CFData *>, TRef<const __CFDictionary *>, TRef<const __CFURL *>, TRef<const __CFArray *>, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                                                BOOL __dummy; 
                                                                struct __alt<10UL, NSObject *> { 
                                                                    NSObject *__value; 
                                                                } __head; 
                                                                union __union<std::__variant_detail::_Trait::_Available, 11UL, TString, TRef<const __CFString *>, TRef<const __CFNumber *>, TRef<const __CFData *>, TRef<const __CFDictionary *>, TRef<const __CFURL *>, TRef<const __CFArray *>, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                                                    BOOL __dummy; 
                                                                    struct __alt<11UL, TString> { 
                                                                        struct TString { 
                                                                            struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { 
                                                                                struct __CFString {} *fRef; 
                                                                            } fString; 
                                                                        } __value; 
                                                                    } __head; 
                                                                    union __union<std::__variant_detail::_Trait::_Available, 12UL, TRef<const __CFString *>, TRef<const __CFNumber *>, TRef<const __CFData *>, TRef<const __CFDictionary *>, TRef<const __CFURL *>, TRef<const __CFArray *>, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                                                        BOOL __dummy; 
                                                                        struct __alt<12UL, TRef<const __CFString *>> { 
                                                                            struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { 
                                                                                struct __CFString {} *fRef; 
                                                                            } __value; 
                                                                        } __head; 
                                                                        union __union<std::__variant_detail::_Trait::_Available, 13UL, TRef<const __CFNumber *>, TRef<const __CFData *>, TRef<const __CFDictionary *>, TRef<const __CFURL *>, TRef<const __CFArray *>, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                                                            BOOL __dummy; 
                                                                            struct __alt<13UL, TRef<const __CFNumber *>> { 
                                                                                struct TRef<const __CFNumber *, TRetainReleasePolicy<CFNumberRef>> { 
                                                                                    struct __CFNumber {} *fRef; 
                                                                                } __value; 
                                                                            } __head; 
                                                                            union __union<std::__variant_detail::_Trait::_Available, 14UL, TRef<const __CFData *>, TRef<const __CFDictionary *>, TRef<const __CFURL *>, TRef<const __CFArray *>, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                                                                BOOL __dummy; 
                                                                                struct __alt<14UL, TRef<const __CFData *>> { 
                                                                                    struct TRef<const __CFData *, TRetainReleasePolicy<CFDataRef>> { 
                                                                                        struct __CFData {} *fRef; 
                                                                                    } __value; 
                                                                                } __head; 
                                                                                union __union<std::__variant_detail::_Trait::_Available, 15UL, TRef<const __CFDictionary *>, TRef<const __CFURL *>, TRef<const __CFArray *>, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                                                                    BOOL __dummy; 
                                                                                    struct __alt<15UL, TRef<const __CFDictionary *>> { 
                                                                                        struct TRef<const __CFDictionary *, TRetainReleasePolicy<CFDictionaryRef>> { 
                                                                                            struct __CFDictionary {} *fRef; 
                                                                                        } __value; 
                                                                                    } __head; 
                                                                                    union __union<std::__variant_detail::_Trait::_Available, 16UL, TRef<const __CFURL *>, TRef<const __CFArray *>, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                                                                        BOOL __dummy; 
                                                                                        struct __alt<16UL, TRef<const __CFURL *>> { 
                                                                                            struct TRef<const __CFURL *, TRetainReleasePolicy<CFURLRef>> { 
                                                                                                struct __CFURL {} *fRef; 
                                                                                            } __value; 
                                                                                        } __head; 
                                                                                        union __union<std::__variant_detail::_Trait::_Available, 17UL, TRef<const __CFArray *>, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                                                                            BOOL __dummy; 
                                                                                            struct __alt<17UL, TRef<const __CFArray *>> { 
                                                                                                struct TRef<const __CFArray *, TRetainReleasePolicy<CFArrayRef>> { 
                                                                                                    struct __CFArray {} *fRef; 
                                                                                                } __value; 
                                                                                            } __head; 
                                                                                            union __union<std::__variant_detail::_Trait::_Available, 18UL, TRef<__CFFileSecurity *>, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                                                                                BOOL __dummy; 
                                                                                                struct __alt<18UL, TRef<__CFFileSecurity *>> { 
                                                                                                    struct TRef<__CFFileSecurity *, TRetainReleasePolicy<CFFileSecurityRef>> { 
                                                                                                        struct __CFFileSecurity {} *fRef; 
                                                                                                    } __value; 
                                                                                                } __head; 
                                                                                                union __union<std::__variant_detail::_Trait::_Available, 19UL, TRef<TReferenceCounted *>, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                                                                                    BOOL __dummy; 
                                                                                                    struct __alt<19UL, TRef<TReferenceCounted *>> { 
                                                                                                        struct TRef<TReferenceCounted *, TRetainReleasePolicy<TReferenceCounted *>> { 
                                                                                                            struct TReferenceCounted {} *fRef; 
                                                                                                        } __value; 
                                                                                                    } __head; 
                                                                                                    union __union<std::__variant_detail::_Trait::_Available, 20UL, Property, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                                                                                        BOOL __dummy; 
                                                                                                        struct __alt<20UL, Property> { 
                                                                                                            unsigned int __value; 
                                                                                                        } __head; 
                                                                                                        union __union<std::__variant_detail::_Trait::_Available, 21UL, NodeRequestOptions, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                                                                                            BOOL __dummy; 
                                                                                                            struct __alt<21UL, NodeRequestOptions> { 
                                                                                                                unsigned int __value; 
                                                                                                            } __head; 
                                                                                                            union __union<std::__variant_detail::_Trait::_Available, 22UL, NodeDSStoreStatus, DSBladeRunnerFlags> { 
                                                                                                                BOOL __dummy; 
                                                                                                                struct __alt<22UL, NodeDSStoreStatus> { 
                                                                                                                    unsigned int __value; 
                                                                                                                } __head; 
                                                                                                                union __union<std::__variant_detail::_Trait::_Available, 23UL, DSBladeRunnerFlags> { 
                                                                                                                    BOOL __dummy; 
                                                                                                                    struct __alt<23UL, DSBladeRunnerFlags> { 
                                                                                                                        unsigned int __value; 
                                                                                                                    } __head; 
                                                                                                                    union __union<std::__variant_detail::_Trait::_Available, 24UL> { } __tail; 
                                                                                                                } __tail; 
                                                                                                            } __tail; 
                                                                                                        } __tail; 
                                                                                                    } __tail; 
                                                                                                } __tail; 
                                                                                            } __tail; 
                                                                                        } __tail; 
                                                                                    } __tail; 
                                                                                } __tail; 
                                                                            } __tail; 
                                                                        } __tail; 
                                                                    } __tail; 
                                                                } __tail; 
                                                            } __tail; 
                                                        } __tail; 
                                                    } __tail; 
                                                } __tail; 
                                            } __tail; 
                                        } __tail; 
                                    } __tail; 
                                } __tail; 
                            } __tail; 
                        } __tail; 
                    } __data; 
                    unsigned int __index; 
                } __impl_; 
            } fData; 
        } fPropertyValue; 
        struct shared_ptr<TNodeTask> { 
            struct TNodeTask {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } fTask; 
        struct TRef<TDSNotifier *, TRetainReleasePolicy<TDSNotifier *>> { 
            struct TDSNotifier {} *fRef; 
        } fNotifier; 
    }  _event;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init:(const void*)arg1;

@end
