
@interface _EARUserProfileBuilder : NSObject {
    struct set<std::vector<std::string>, quasar::NameEnumerator::EnumComparator, std::allocator<std::vector<std::string>>> { 
        struct __tree<std::vector<std::string>, quasar::NameEnumerator::EnumComparator, std::allocator<std::vector<std::string>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::vector<std::string>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, quasar::NameEnumerator::EnumComparator> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _contactEnumSet;
    struct shared_ptr<quasar::LmeDataFactory> { 
        struct LmeDataFactory {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _dataFactory;
    struct set<std::string, std::less<std::string>, std::allocator<std::string>> { 
        struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<std::string>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _experimentIds;
    struct unique_ptr<quasar::G2P, std::default_delete<quasar::G2P>> { 
        struct __compressed_pair<quasar::G2P *, std::default_delete<quasar::G2P>> { 
            struct G2P {} *__value_; 
        } __ptr_; 
    }  _g2p;
    NSString * _language;
    struct unique_ptr<quasar::WordPronCache, std::default_delete<quasar::WordPronCache>> { 
        struct __compressed_pair<quasar::WordPronCache *, std::default_delete<quasar::WordPronCache>> { 
            struct WordPronCache {} *__value_; 
        } __ptr_; 
    }  _outPronCache;
    int  _outPronCacheHits;
    int  _outPronCacheMisses;
    struct unique_ptr<quasar::PersonalizationRecipe, std::default_delete<quasar::PersonalizationRecipe>> { 
        struct __compressed_pair<quasar::PersonalizationRecipe *, std::default_delete<quasar::PersonalizationRecipe>> { 
            struct PersonalizationRecipe {} *__value_; 
        } __ptr_; 
    }  _personalizationRecipe;
    struct shared_ptr<quasar::PronCache<std::string, std::vector<std::string>>> { 
        void *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _pronCache;
    struct shared_ptr<quasar::LmeData> { 
        struct LmeData {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _quasarLmeData;
    struct unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, int>>> { 
        struct __hash_table<std::__hash_value_type<std::string, int>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, int>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, int>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, int>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, int>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, int>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, int>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, int>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _quasarTemplate2Count;
    bool  _reuseProfile;
    struct BasicTextSanitizer { 
        int (**_vptr$TextSanitizer)(); 
        struct shared_ptr<quasar::URegularExpressionWrapper> { 
            struct URegularExpressionWrapper {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } mUnicodeOutliers; 
        struct shared_ptr<quasar::URegularExpressionWrapper> { 
            struct URegularExpressionWrapper {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } mSpecialChars; 
        struct shared_ptr<quasar::URegularExpressionWrapper> { 
            struct URegularExpressionWrapper {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } mDupSpacePattern; 
        struct shared_ptr<quasar::URegularExpressionWrapper> { 
            struct URegularExpressionWrapper {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } mCtrlCharsPattern; 
        int state; 
        struct unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::string>>> { 
            struct __hash_table<std::__hash_value_type<std::string, std::string>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::string>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } UTF8_MAP; 
        struct unordered_map<char32_t, char32_t, std::hash<char32_t>, std::equal_to<char32_t>, std::allocator<std::pair<const char32_t, char32_t>>> { 
            struct __hash_table<std::__hash_value_type<char32_t, char32_t>, std::__unordered_map_hasher<char32_t, std::__hash_value_type<char32_t, char32_t>, std::hash<char32_t>, std::equal_to<char32_t>>, std::__unordered_map_equal<char32_t, std::__hash_value_type<char32_t, char32_t>, std::equal_to<char32_t>, std::hash<char32_t>>, std::allocator<std::__hash_value_type<char32_t, char32_t>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<char32_t, char32_t>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<char32_t, std::__hash_value_type<char32_t, char32_t>, std::hash<char32_t>, std::equal_to<char32_t>>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<char32_t, std::__hash_value_type<char32_t, char32_t>, std::equal_to<char32_t>, std::hash<char32_t>>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } unicode_map; 
    }  _sanitizer;
    struct map<std::string, long long, std::less<std::string>, std::allocator<std::pair<const std::string, long long>>> { 
        struct __tree<std::__value_type<std::string, long long>, std::__map_value_compare<std::string, std::__value_type<std::string, long long>, std::less<std::string>>, std::allocator<std::__value_type<std::string, long long>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, long long>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, long long>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _templateToVersion;
    struct unique_ptr<quasar::TextTokenizer, std::default_delete<quasar::TextTokenizer>> { 
        struct __compressed_pair<quasar::TextTokenizer *, std::default_delete<quasar::TextTokenizer>> { 
            struct TextTokenizer {} *__value_; 
        } __ptr_; 
    }  _tokenizer;
    NSString * _unmaskedUserId;
    struct LmePackedUserData { 
        struct SymbolTable { 
            int (**_vptr$SymbolTable)(); 
            struct SymbolTableImpl {} *impl_; 
        } dataPronSyms; 
        struct map<std::string, std::vector<std::vector<quasar::LmePackedWord>>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::vector<quasar::LmePackedWord>>>>> { 
            struct __tree<std::__value_type<std::string, std::vector<std::vector<quasar::LmePackedWord>>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::vector<quasar::LmePackedWord>>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<std::vector<quasar::LmePackedWord>>>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::vector<quasar::LmePackedWord>>>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::vector<quasar::LmePackedWord>>>, std::less<std::string>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } data; 
    }  _userData;
    int  _wordsAccepted;
    int  _wordsRejected;
}

@property (nonatomic, copy) NSSet *experimentIds;
@property (nonatomic, readonly) _EARPeopleSuggesterConfig *peopleSuggesterConfig;
@property (nonatomic, copy) NSDictionary *templateToVersion;
@property (nonatomic, copy) NSString *userId;

+ (void)initialize;
+ (bool)isEasyToRecognizeWord:(id)arg1 forLocale:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_logLmeSlotUpdatedEventsWithLanguage:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned int x_1_4_3 : 63; unsigned int x_1_4_4 : 1; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; unsigned char x_2_4_2[0]; unsigned int x_2_4_3 : 7; unsigned int x_2_4_4 : 1; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg1 numEnumeratedEntries:(struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>, std::allocator<std::__value_type<std::string, int>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg2;
- (void)_logSpeechProfileUpdatedEventWithLmeData:(struct shared_ptr<quasar::LmeData> { struct LmeData {} *x1; struct __shared_weak_count {} *x2; })arg1 sizeInBytes:(int)arg2 numEnumeratedEntries:(struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>, std::allocator<std::__value_type<std::string, int>>> { void *x_1_1_1; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>> { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg3;
- (void)_pronunciationsForOrthography:(const void*)arg1 phoneticOrthography:(const void*)arg2 templateName:(const void*)arg3 pronunciations:(void*)arg4 pronRequest:(int)arg5 outOrthography:(void*)arg6;
- (bool)_writeProfileToStream:(void*)arg1;
- (void)addPersonalizationData:(id)arg1;
- (void)addPersonalizationJsonData:(id)arg1;
- (void)addWordWithParts:(id)arg1 templateName:(id)arg2;
- (id)createInlineLmeUserDataForContextData:(id)arg1 speechProfile:(id)arg2;
- (void)createInlineLmeUserDataForContextStrings:(id)arg1;
- (id)dataProfile;
- (id)experimentIds;
- (id)initWithConfiguration:(id)arg1 language:(id)arg2 overrides:(id)arg3 sdapiOverrides:(id)arg4 emptyVoc:(id)arg5 pgVoc:(id)arg6 paramsetHolder:(id)arg7;
- (id)initWithConfiguration:(id)arg1 language:(id)arg2 overrides:(id)arg3 sdapiOverrides:(id)arg4 emptyVoc:(id)arg5 pgVoc:(id)arg6 paramsetHolder:(id)arg7 isJit:(bool)arg8;
- (id)initWithConfiguration:(id)arg1 language:(id)arg2 overrides:(id)arg3 sdapiOverrides:(id)arg4 generalVoc:(id)arg5 emptyVoc:(id)arg6 pgVoc:(id)arg7 lexiconEnh:(id)arg8 tokenEnh:(id)arg9 paramsetHolder:(id)arg10;
- (id)initWithConfiguration:(id)arg1 language:(id)arg2 overrides:(id)arg3 sdapiOverrides:(id)arg4 generalVoc:(id)arg5 emptyVoc:(id)arg6 pgVoc:(id)arg7 lexiconEnh:(id)arg8 tokenEnh:(id)arg9 paramsetHolder:(id)arg10 isJit:(bool)arg11;
- (id)initWithConfiguration:(id)arg1 language:(id)arg2 overrides:(id)arg3 textNormalizationModelRoot:(id)arg4 sdapiOverrides:(id)arg5 emptyVoc:(id)arg6 pgVoc:(id)arg7 paramsetHolder:(id)arg8 isJit:(bool)arg9;
- (id)initWithConfiguration:(id)arg1 language:(id)arg2 sdapiOverrides:(id)arg3 generalVoc:(id)arg4 emptyVoc:(id)arg5 pgVoc:(id)arg6 lexiconEnh:(id)arg7 tokenEnh:(id)arg8 paramsetHolder:(id)arg9;
- (id)initWithConfiguration:(id)arg1 withLanguage:(id)arg2 withSdapiOverrides:(id)arg3 withSdapiConfig:(id)arg4;
- (id)peopleSuggesterConfig;
- (id)pronunciationsForOrthography:(id)arg1;
- (void)readUserProfile:(id)arg1;
- (void)readUserProfile:(id)arg1 reuseProfile:(bool)arg2;
- (void)readUserProfileWithPath:(id)arg1;
- (void)readUserProfileWithPath:(id)arg1 reuseProfile:(bool)arg2;
- (void)removeAllWords;
- (void)removeLmeDataForTemplateName:(id)arg1;
- (id)sanitizedStringWithString:(id)arg1;
- (void)setExperimentIds:(id)arg1;
- (void)setTemplateToVersion:(id)arg1;
- (void)setUserId:(id)arg1;
- (void)signalEndOfUserData;
- (id)templateToVersion;
- (id)userId;
- (void)writeOutUserDataToJson:(id)arg1 withConfig:(id)arg2;
- (bool)writeProfileToFile:(id)arg1 protectionClass:(long long)arg2 coordinated:(bool)arg3 length:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)writeProfileToFile:(id)arg1 protectionClass:(long long)arg2 length:(unsigned long long*)arg3 error:(id*)arg4;

@end
