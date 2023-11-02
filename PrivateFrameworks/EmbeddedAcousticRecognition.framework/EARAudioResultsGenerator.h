
@interface EARAudioResultsGenerator : NSObject {
    struct shared_ptr<quasar::SyncPSRAudioProcessor> { 
        struct SyncPSRAudioProcessor {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _audioProcessor;
    NSString * _configRoot;
    <EARAudioResultsGeneratorDelegate> * _delegate;
    NSMutableData * _entireResultMatrix;
    unsigned long long  _globalNumVectors;
    bool  _isAudioSessionLive;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _sampleRate;
    unsigned long long  _sessionFrameCount;
    struct SystemConfig { 
        int (**_vptr$OptionsItf)(); 
        struct SystemConfigInfo { 
            struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                    struct __rep { 
                        union { 
                            struct __long { 
                                char *__data_; 
                                unsigned long long __size_; 
                                unsigned int __cap_ : 63; 
                                unsigned int __is_long_ : 1; 
                            } __l; 
                            struct __short { 
                                BOOL __data_[23]; 
                                unsigned char __padding_[0]; 
                                unsigned int __size_ : 7; 
                                unsigned int __is_long_ : 1; 
                            } __s; 
                            struct __raw { 
                                unsigned long long __words[3]; 
                            } __r; 
                        } ; 
                    } __value_; 
                } __r_; 
            } jsonConfigFilePath; 
            struct Version { 
                int versionMajor; 
                int versionMinor; 
            } configFileVersion; 
            struct Path { 
                int (**_vptr$Path)(); 
                struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                        struct __rep { 
                            union { 
                                struct __long { 
                                    char *__data_; 
                                    unsigned long long __size_; 
                                    unsigned int __cap_ : 63; 
                                    unsigned int __is_long_ : 1; 
                                } __l; 
                                struct __short { 
                                    BOOL __data_[23]; 
                                    unsigned char __padding_[0]; 
                                    unsigned int __size_ : 7; 
                                    unsigned int __is_long_ : 1; 
                                } __s; 
                                struct __raw { 
                                    unsigned long long __words[3]; 
                                } __r; 
                            } ; 
                        } __value_; 
                    } __r_; 
                } str; 
            } configPath; 
            struct PTree { 
                int dataType; 
                struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                        struct __rep { 
                            union { 
                                struct __long { 
                                    char *__data_; 
                                    unsigned long long __size_; 
                                    unsigned int __cap_ : 63; 
                                    unsigned int __is_long_ : 1; 
                                } __l; 
                                struct __short { 
                                    BOOL __data_[23]; 
                                    unsigned char __padding_[0]; 
                                    unsigned int __size_ : 7; 
                                    unsigned int __is_long_ : 1; 
                                } __s; 
                                struct __raw { 
                                    unsigned long long __words[3]; 
                                } __r; 
                            } ; 
                        } __value_; 
                    } __r_; 
                } dataValue; 
                struct vector<std::pair<std::string, quasar::PTree>, std::allocator<std::pair<std::string, quasar::PTree>>> { 
                    void *__begin_; 
                    void *__end_; 
                    struct __compressed_pair<std::pair<std::string, quasar::PTree> *, std::allocator<std::pair<std::string, quasar::PTree>>> { 
                        void *__value_; 
                    } __end_cap_; 
                } map; 
                bool isALeaf; 
            } pTree; 
            struct SpeechModelInfo { 
                struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                        struct __rep { 
                            union { 
                                struct __long { 
                                    char *__data_; 
                                    unsigned long long __size_; 
                                    unsigned int __cap_ : 63; 
                                    unsigned int __is_long_ : 1; 
                                } __l; 
                                struct __short { 
                                    BOOL __data_[23]; 
                                    unsigned char __padding_[0]; 
                                    unsigned int __size_ : 7; 
                                    unsigned int __is_long_ : 1; 
                                } __s; 
                                struct __raw { 
                                    unsigned long long __words[3]; 
                                } __r; 
                            } ; 
                        } __value_; 
                    } __r_; 
                } version; 
                struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                        struct __rep { 
                            union { 
                                struct __long { 
                                    char *__data_; 
                                    unsigned long long __size_; 
                                    unsigned int __cap_ : 63; 
                                    unsigned int __is_long_ : 1; 
                                } __l; 
                                struct __short { 
                                    BOOL __data_[23]; 
                                    unsigned char __padding_[0]; 
                                    unsigned int __size_ : 7; 
                                    unsigned int __is_long_ : 1; 
                                } __s; 
                                struct __raw { 
                                    unsigned long long __words[3]; 
                                } __r; 
                            } ; 
                        } __value_; 
                    } __r_; 
                } acousticModelVersion; 
                struct set<int, std::less<int>, std::allocator<int>> { 
                    struct __tree<int, std::less<int>, std::allocator<int>> { 
                        void *__begin_node_; 
                        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<int, void *>>> { 
                            struct __tree_end_node<std::__tree_node_base<void *> *> { 
                                void *__left_; 
                            } __value_; 
                        } __pair1_; 
                        struct __compressed_pair<unsigned long, std::less<int>> { 
                            unsigned long long __value_; 
                        } __pair3_; 
                    } __tree_; 
                } samplingRates; 
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
                } tasks; 
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
                } osTypes; 
                struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                        struct __rep { 
                            union { 
                                struct __long { 
                                    char *__data_; 
                                    unsigned long long __size_; 
                                    unsigned int __cap_ : 63; 
                                    unsigned int __is_long_ : 1; 
                                } __l; 
                                struct __short { 
                                    BOOL __data_[23]; 
                                    unsigned char __padding_[0]; 
                                    unsigned int __size_ : 7; 
                                    unsigned int __is_long_ : 1; 
                                } __s; 
                                struct __raw { 
                                    unsigned long long __words[3]; 
                                } __r; 
                            } ; 
                        } __value_; 
                    } __r_; 
                } language; 
                struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                        struct __rep { 
                            union { 
                                struct __long { 
                                    char *__data_; 
                                    unsigned long long __size_; 
                                    unsigned int __cap_ : 63; 
                                    unsigned int __is_long_ : 1; 
                                } __l; 
                                struct __short { 
                                    BOOL __data_[23]; 
                                    unsigned char __padding_[0]; 
                                    unsigned int __size_ : 7; 
                                    unsigned int __is_long_ : 1; 
                                } __s; 
                                struct __raw { 
                                    unsigned long long __words[3]; 
                                } __r; 
                            } ; 
                        } __value_; 
                    } __r_; 
                } phoneSetVersion; 
                struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                        struct __rep { 
                            union { 
                                struct __long { 
                                    char *__data_; 
                                    unsigned long long __size_; 
                                    unsigned int __cap_ : 63; 
                                    unsigned int __is_long_ : 1; 
                                } __l; 
                                struct __short { 
                                    BOOL __data_[23]; 
                                    unsigned char __padding_[0]; 
                                    unsigned int __size_ : 7; 
                                    unsigned int __is_long_ : 1; 
                                } __s; 
                                struct __raw { 
                                    unsigned long long __words[3]; 
                                } __r; 
                            } ; 
                        } __value_; 
                    } __r_; 
                } acousticProfileVersion; 
                struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> { 
                    struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string>>> { 
                        void *__begin_node_; 
                        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> { 
                            struct __tree_end_node<std::__tree_node_base<void *> *> { 
                                void *__left_; 
                            } __value_; 
                        } __pair1_; 
                        struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>> { 
                            unsigned long long __value_; 
                        } __pair3_; 
                    } __tree_; 
                } aceToQuasarTemplate; 
                struct map<std::string, std::vector<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string>>>> { 
                    struct __tree<std::__value_type<std::string, std::vector<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<std::string>>>> { 
                        void *__begin_node_; 
                        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::string>>, void *>>> { 
                            struct __tree_end_node<std::__tree_node_base<void *> *> { 
                                void *__left_; 
                            } __value_; 
                        } __pair1_; 
                        struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>>> { 
                            unsigned long long __value_; 
                        } __pair3_; 
                    } __tree_; 
                } quasarTemplateToAce; 
                struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> { 
                    struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string>>> { 
                        void *__begin_node_; 
                        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> { 
                            struct __tree_end_node<std::__tree_node_base<void *> *> { 
                                void *__left_; 
                            } __value_; 
                        } __pair1_; 
                        struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>> { 
                            unsigned long long __value_; 
                        } __pair3_; 
                    } __tree_; 
                } quasarTemplateToEnumerationType; 
                int g2pModelVersion; 
                int hybridEndpointerVersion; 
            } speechModelInfo; 
            struct TranslationModelInfo { 
                struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                        struct __rep { 
                            union { 
                                struct __long { 
                                    char *__data_; 
                                    unsigned long long __size_; 
                                    unsigned int __cap_ : 63; 
                                    unsigned int __is_long_ : 1; 
                                } __l; 
                                struct __short { 
                                    BOOL __data_[23]; 
                                    unsigned char __padding_[0]; 
                                    unsigned int __size_ : 7; 
                                    unsigned int __is_long_ : 1; 
                                } __s; 
                                struct __raw { 
                                    unsigned long long __words[3]; 
                                } __r; 
                            } ; 
                        } __value_; 
                    } __r_; 
                } version; 
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
                } tasks; 
                struct vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> { 
                    void *__begin_; 
                    void *__end_; 
                    struct __compressed_pair<std::pair<std::string, std::string> *, std::allocator<std::pair<std::string, std::string>>> { 
                        void *__value_; 
                    } __end_cap_; 
                } languagePairs; 
                struct unordered_map<std::string, std::vector<std::pair<std::string, std::string>>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::vector<std::pair<std::string, std::string>>>>> { 
                    struct __hash_table<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>>> { 
                        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> *>>> { 
                            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> *>>> { 
                                void **__value_; 
                                struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> *>> { 
                                    struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> *>> { 
                                        unsigned long long __value_; 
                                    } __data_; 
                                } __value_; 
                            } __ptr_; 
                        } __bucket_list_; 
                        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *>>> { 
                            struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, void *> *> { 
                                void *__next_; 
                            } __value_; 
                        } __p1_; 
                        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, std::hash<std::string>, std::equal_to<std::string>>> { 
                            unsigned long long __value_; 
                        } __p2_; 
                        struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::vector<std::pair<std::string, std::string>>>, std::equal_to<std::string>, std::hash<std::string>>> { 
                            float __value_; 
                        } __p3_; 
                    } __table_; 
                } taskSpecificLanguagePairs; 
                struct unordered_map<std::string, quasar::TranslationPairSetting, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, quasar::TranslationPairSetting>>> { 
                    struct __hash_table<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, quasar::TranslationPairSetting>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, quasar::TranslationPairSetting>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, quasar::TranslationPairSetting>>> { 
                        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> *>>> { 
                            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> *>>> { 
                                void **__value_; 
                                struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> *>> { 
                                    struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> *>> { 
                                        unsigned long long __value_; 
                                    } __data_; 
                                } __value_; 
                            } __ptr_; 
                        } __bucket_list_; 
                        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *>>> { 
                            struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, quasar::TranslationPairSetting>, void *> *> { 
                                void *__next_; 
                            } __value_; 
                        } __p1_; 
                        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, quasar::TranslationPairSetting>, std::hash<std::string>, std::equal_to<std::string>>> { 
                            unsigned long long __value_; 
                        } __p2_; 
                        struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, quasar::TranslationPairSetting>, std::equal_to<std::string>, std::hash<std::string>>> { 
                            float __value_; 
                        } __p3_; 
                    } __table_; 
                } pairSpecificSettings; 
                struct unordered_map<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>>> { 
                    struct __hash_table<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>>> { 
                        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> *>>> { 
                            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> *>>> { 
                                void **__value_; 
                                struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> *>> { 
                                    struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> *>> { 
                                        unsigned long long __value_; 
                                    } __data_; 
                                } __value_; 
                            } __ptr_; 
                        } __bucket_list_; 
                        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *>>> { 
                            struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, void *> *> { 
                                void *__next_; 
                            } __value_; 
                        } __p1_; 
                        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, std::hash<std::string>, std::equal_to<std::string>>> { 
                            unsigned long long __value_; 
                        } __p2_; 
                        struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_map<std::string, quasar::TranslationPairSetting>>, std::equal_to<std::string>, std::hash<std::string>>> { 
                            float __value_; 
                        } __p3_; 
                    } __table_; 
                } taskLangPairSpecificSettings; 
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
                } taskAlias; 
                struct unordered_map<std::string, std::unordered_set<std::string>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::unordered_set<std::string>>>> { 
                    struct __hash_table<std::__hash_value_type<std::string, std::unordered_set<std::string>>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_set<std::string>>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_set<std::string>>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::unordered_set<std::string>>>> { 
                        struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<std::string>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<std::string>>, void *> *> *>>> { 
                            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<std::string>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<std::string>>, void *> *> *>>> { 
                                void **__value_; 
                                struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<std::string>>, void *> *> *>> { 
                                    struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<std::string>>, void *> *> *>> { 
                                        unsigned long long __value_; 
                                    } __data_; 
                                } __value_; 
                            } __ptr_; 
                        } __bucket_list_; 
                        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<std::string>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<std::string>>, void *>>> { 
                            struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::unordered_set<std::string>>, void *> *> { 
                                void *__next_; 
                            } __value_; 
                        } __p1_; 
                        struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::unordered_set<std::string>>, std::hash<std::string>, std::equal_to<std::string>>> { 
                            unsigned long long __value_; 
                        } __p2_; 
                        struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::unordered_set<std::string>>, std::equal_to<std::string>, std::hash<std::string>>> { 
                            float __value_; 
                        } __p3_; 
                    } __table_; 
                } supportedOverridesPerTask; 
            } translationModelInfo; 
            struct HybridClientConfigs { 
                struct map<int, std::map<std::string, double>, std::less<int>, std::allocator<std::pair<const int, std::map<std::string, double>>>> { 
                    struct __tree<std::__value_type<int, std::map<std::string, double>>, std::__map_value_compare<int, std::__value_type<int, std::map<std::string, double>>, std::less<int>>, std::allocator<std::__value_type<int, std::map<std::string, double>>>> { 
                        void *__begin_node_; 
                        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, std::map<std::string, double>>, void *>>> { 
                            struct __tree_end_node<std::__tree_node_base<void *> *> { 
                                void *__left_; 
                            } __value_; 
                        } __pair1_; 
                        struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, std::map<std::string, double>>, std::less<int>>> { 
                            unsigned long long __value_; 
                        } __pair3_; 
                    } __tree_; 
                } hybridEndpointerThresholds; 
                struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { 
                    struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>, std::allocator<std::__value_type<std::string, int>>> { 
                        void *__begin_node_; 
                        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>> { 
                            struct __tree_end_node<std::__tree_node_base<void *> *> { 
                                void *__left_; 
                            } __value_; 
                        } __pair1_; 
                        struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>> { 
                            unsigned long long __value_; 
                        } __pair3_; 
                    } __tree_; 
                } hybridEndpointerExtraDelayFrequency; 
            } hybridClientConfigs; 
            int configType; 
            struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
                struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
                    struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                            void **__value_; 
                            struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                                struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                                    unsigned long long __value_; 
                                } __data_; 
                            } __value_; 
                        } __ptr_; 
                    } __bucket_list_; 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> { 
                        struct __hash_node_base<std::__hash_node<std::string, void *> *> { 
                            void *__next_; 
                        } __value_; 
                    } __p1_; 
                    struct __compressed_pair<unsigned long, std::hash<std::string>> { 
                        unsigned long long __value_; 
                    } __p2_; 
                    struct __compressed_pair<float, std::equal_to<std::string>> { 
                        float __value_; 
                    } __p3_; 
                } __table_; 
            } requiredAbsolutePaths; 
            struct unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
                struct __hash_table<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> { 
                    struct unique_ptr<std::__hash_node_base<std::__hash_node<std::string, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                        struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>>> { 
                            void **__value_; 
                            struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                                struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::string, void *> *> *>> { 
                                    unsigned long long __value_; 
                                } __data_; 
                            } __value_; 
                        } __ptr_; 
                    } __bucket_list_; 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::string, void *> *>, std::allocator<std::__hash_node<std::string, void *>>> { 
                        struct __hash_node_base<std::__hash_node<std::string, void *> *> { 
                            void *__next_; 
                        } __value_; 
                    } __p1_; 
                    struct __compressed_pair<unsigned long, std::hash<std::string>> { 
                        unsigned long long __value_; 
                    } __p2_; 
                    struct __compressed_pair<float, std::equal_to<std::string>> { 
                        float __value_; 
                    } __p3_; 
                } __table_; 
            } optionalAbsolutePaths; 
        } info; 
        struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
            struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                struct __rep { 
                    union { 
                        struct __long { 
                            char *__data_; 
                            unsigned long long __size_; 
                            unsigned int __cap_ : 63; 
                            unsigned int __is_long_ : 1; 
                        } __l; 
                        struct __short { 
                            BOOL __data_[23]; 
                            unsigned char __padding_[0]; 
                            unsigned int __size_ : 7; 
                            unsigned int __is_long_ : 1; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __value_; 
            } __r_; 
        } prefix; 
        struct shared_ptr<quasar::ModelLoader> { 
            struct ModelLoader {} *__ptr_; 
            struct __shared_weak_count {} *__cntrl_; 
        } modelLoader; 
        struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
            struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                struct __rep { 
                    union { 
                        struct __long { 
                            char *__data_; 
                            unsigned long long __size_; 
                            unsigned int __cap_ : 63; 
                            unsigned int __is_long_ : 1; 
                        } __l; 
                        struct __short { 
                            BOOL __data_[23]; 
                            unsigned char __padding_[0]; 
                            unsigned int __size_ : 7; 
                            unsigned int __is_long_ : 1; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __value_; 
            } __r_; 
        } mainModelVersion; 
        struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
            struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                struct __rep { 
                    union { 
                        struct __long { 
                            char *__data_; 
                            unsigned long long __size_; 
                            unsigned int __cap_ : 63; 
                            unsigned int __is_long_ : 1; 
                        } __l; 
                        struct __short { 
                            BOOL __data_[23]; 
                            unsigned char __padding_[0]; 
                            unsigned int __size_ : 7; 
                            unsigned int __is_long_ : 1; 
                        } __s; 
                        struct __raw { 
                            unsigned long long __words[3]; 
                        } __r; 
                    } ; 
                } __value_; 
            } __r_; 
        } mainConfigDirectory; 
        struct SpeechModelInfo { 
            struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                    struct __rep { 
                        union { 
                            struct __long { 
                                char *__data_; 
                                unsigned long long __size_; 
                                unsigned int __cap_ : 63; 
                                unsigned int __is_long_ : 1; 
                            } __l; 
                            struct __short { 
                                BOOL __data_[23]; 
                                unsigned char __padding_[0]; 
                                unsigned int __size_ : 7; 
                                unsigned int __is_long_ : 1; 
                            } __s; 
                            struct __raw { 
                                unsigned long long __words[3]; 
                            } __r; 
                        } ; 
                    } __value_; 
                } __r_; 
            } version; 
            struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                    struct __rep { 
                        union { 
                            struct __long { 
                                char *__data_; 
                                unsigned long long __size_; 
                                unsigned int __cap_ : 63; 
                                unsigned int __is_long_ : 1; 
                            } __l; 
                            struct __short { 
                                BOOL __data_[23]; 
                                unsigned char __padding_[0]; 
                                unsigned int __size_ : 7; 
                                unsigned int __is_long_ : 1; 
                            } __s; 
                            struct __raw { 
                                unsigned long long __words[3]; 
                            } __r; 
                        } ; 
                    } __value_; 
                } __r_; 
            } acousticModelVersion; 
            struct set<int, std::less<int>, std::allocator<int>> { 
                struct __tree<int, std::less<int>, std::allocator<int>> { 
                    void *__begin_node_; 
                    struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<int, void *>>> { 
                        struct __tree_end_node<std::__tree_node_base<void *> *> { 
                            void *__left_; 
                        } __value_; 
                    } __pair1_; 
                    struct __compressed_pair<unsigned long, std::less<int>> { 
                        unsigned long long __value_; 
                    } __pair3_; 
                } __tree_; 
            } samplingRates; 
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
            } tasks; 
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
            } osTypes; 
            struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                    struct __rep { 
                        union { 
                            struct __long { 
                                char *__data_; 
                                unsigned long long __size_; 
                                unsigned int __cap_ : 63; 
                                unsigned int __is_long_ : 1; 
                            } __l; 
                            struct __short { 
                                BOOL __data_[23]; 
                                unsigned char __padding_[0]; 
                                unsigned int __size_ : 7; 
                                unsigned int __is_long_ : 1; 
                            } __s; 
                            struct __raw { 
                                unsigned long long __words[3]; 
                            } __r; 
                        } ; 
                    } __value_; 
                } __r_; 
            } language; 
            struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                    struct __rep { 
                        union { 
                            struct __long { 
                                char *__data_; 
                                unsigned long long __size_; 
                                unsigned int __cap_ : 63; 
                                unsigned int __is_long_ : 1; 
                            } __l; 
                            struct __short { 
                                BOOL __data_[23]; 
                                unsigned char __padding_[0]; 
                                unsigned int __size_ : 7; 
                                unsigned int __is_long_ : 1; 
                            } __s; 
                            struct __raw { 
                                unsigned long long __words[3]; 
                            } __r; 
                        } ; 
                    } __value_; 
                } __r_; 
            } phoneSetVersion; 
            struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                    struct __rep { 
                        union { 
                            struct __long { 
                                char *__data_; 
                                unsigned long long __size_; 
                                unsigned int __cap_ : 63; 
                                unsigned int __is_long_ : 1; 
                            } __l; 
                            struct __short { 
                                BOOL __data_[23]; 
                                unsigned char __padding_[0]; 
                                unsigned int __size_ : 7; 
                                unsigned int __is_long_ : 1; 
                            } __s; 
                            struct __raw { 
                                unsigned long long __words[3]; 
                            } __r; 
                        } ; 
                    } __value_; 
                } __r_; 
            } acousticProfileVersion; 
            struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> { 
                struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string>>> { 
                    void *__begin_node_; 
                    struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> { 
                        struct __tree_end_node<std::__tree_node_base<void *> *> { 
                            void *__left_; 
                        } __value_; 
                    } __pair1_; 
                    struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>> { 
                        unsigned long long __value_; 
                    } __pair3_; 
                } __tree_; 
            } aceToQuasarTemplate; 
            struct map<std::string, std::vector<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string>>>> { 
                struct __tree<std::__value_type<std::string, std::vector<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<std::string>>>> { 
                    void *__begin_node_; 
                    struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::string>>, void *>>> { 
                        struct __tree_end_node<std::__tree_node_base<void *> *> { 
                            void *__left_; 
                        } __value_; 
                    } __pair1_; 
                    struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>>> { 
                        unsigned long long __value_; 
                    } __pair3_; 
                } __tree_; 
            } quasarTemplateToAce; 
            struct map<std::string, std::string, std::less<std::string>, std::allocator<std::pair<const std::string, std::string>>> { 
                struct __tree<std::__value_type<std::string, std::string>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string>>> { 
                    void *__begin_node_; 
                    struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string>, void *>>> { 
                        struct __tree_end_node<std::__tree_node_base<void *> *> { 
                            void *__left_; 
                        } __value_; 
                    } __pair1_; 
                    struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string>, std::less<std::string>>> { 
                        unsigned long long __value_; 
                    } __pair3_; 
                } __tree_; 
            } quasarTemplateToEnumerationType; 
            int g2pModelVersion; 
            int hybridEndpointerVersion; 
        } mainSpeechModelInfo; 
        struct map<std::string, bool *, std::less<std::string>, std::allocator<std::pair<const std::string, bool *>>> { 
            struct __tree<std::__value_type<std::string, bool *>, std::__map_value_compare<std::string, std::__value_type<std::string, bool *>, std::less<std::string>>, std::allocator<std::__value_type<std::string, bool *>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, bool *>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, bool *>, std::less<std::string>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } boolMap; 
        struct map<std::string, int *, std::less<std::string>, std::allocator<std::pair<const std::string, int *>>> { 
            struct __tree<std::__value_type<std::string, int *>, std::__map_value_compare<std::string, std::__value_type<std::string, int *>, std::less<std::string>>, std::allocator<std::__value_type<std::string, int *>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int *>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int *>, std::less<std::string>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } intMap; 
        struct map<std::string, unsigned int *, std::less<std::string>, std::allocator<std::pair<const std::string, unsigned int *>>> { 
            struct __tree<std::__value_type<std::string, unsigned int *>, std::__map_value_compare<std::string, std::__value_type<std::string, unsigned int *>, std::less<std::string>>, std::allocator<std::__value_type<std::string, unsigned int *>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, unsigned int *>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, unsigned int *>, std::less<std::string>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } uintMap; 
        struct map<std::string, long long *, std::less<std::string>, std::allocator<std::pair<const std::string, long long *>>> { 
            struct __tree<std::__value_type<std::string, long long *>, std::__map_value_compare<std::string, std::__value_type<std::string, long long *>, std::less<std::string>>, std::allocator<std::__value_type<std::string, long long *>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, long long *>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, long long *>, std::less<std::string>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } int64Map; 
        struct map<std::string, float *, std::less<std::string>, std::allocator<std::pair<const std::string, float *>>> { 
            struct __tree<std::__value_type<std::string, float *>, std::__map_value_compare<std::string, std::__value_type<std::string, float *>, std::less<std::string>>, std::allocator<std::__value_type<std::string, float *>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, float *>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, float *>, std::less<std::string>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } floatMap; 
        struct map<std::string, double *, std::less<std::string>, std::allocator<std::pair<const std::string, double *>>> { 
            struct __tree<std::__value_type<std::string, double *>, std::__map_value_compare<std::string, std::__value_type<std::string, double *>, std::less<std::string>>, std::allocator<std::__value_type<std::string, double *>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, double *>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, double *>, std::less<std::string>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } doubleMap; 
        struct map<std::string, std::string *, std::less<std::string>, std::allocator<std::pair<const std::string, std::string *>>> { 
            struct __tree<std::__value_type<std::string, std::string *>, std::__map_value_compare<std::string, std::__value_type<std::string, std::string *>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::string *>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::string *>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::string *>, std::less<std::string>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } stringMap; 
        struct map<std::string, std::vector<std::string> *, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string> *>>> { 
            struct __tree<std::__value_type<std::string, std::vector<std::string> *>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string> *>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<std::string> *>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::string> *>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string> *>, std::less<std::string>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } stringVecMap; 
        struct map<std::string, std::vector<std::pair<std::string, std::string>> *, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::pair<std::string, std::string>> *>>> { 
            struct __tree<std::__value_type<std::string, std::vector<std::pair<std::string, std::string>> *>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::pair<std::string, std::string>> *>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<std::pair<std::string, std::string>> *>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::pair<std::string, std::string>> *>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::pair<std::string, std::string>> *>, std::less<std::string>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } stringPairVecMap; 
        struct map<std::string, std::unordered_map<std::string, std::string> *, std::less<std::string>, std::allocator<std::pair<const std::string, std::unordered_map<std::string, std::string> *>>> { 
            struct __tree<std::__value_type<std::string, std::unordered_map<std::string, std::string> *>, std::__map_value_compare<std::string, std::__value_type<std::string, std::unordered_map<std::string, std::string> *>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::unordered_map<std::string, std::string> *>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::unordered_map<std::string, std::string> *>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::unordered_map<std::string, std::string> *>, std::less<std::string>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } stringUnorderedMapMap; 
        struct map<std::string, std::unordered_set<std::string> *, std::less<std::string>, std::allocator<std::pair<const std::string, std::unordered_set<std::string> *>>> { 
            struct __tree<std::__value_type<std::string, std::unordered_set<std::string> *>, std::__map_value_compare<std::string, std::__value_type<std::string, std::unordered_set<std::string> *>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::unordered_set<std::string> *>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::unordered_set<std::string> *>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::unordered_set<std::string> *>, std::less<std::string>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } stringUnorderedSetMap; 
        struct map<std::string, quasar::SystemConfig::Version, std::less<std::string>, std::allocator<std::pair<const std::string, quasar::SystemConfig::Version>>> { 
            struct __tree<std::__value_type<std::string, quasar::SystemConfig::Version>, std::__map_value_compare<std::string, std::__value_type<std::string, quasar::SystemConfig::Version>, std::less<std::string>>, std::allocator<std::__value_type<std::string, quasar::SystemConfig::Version>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, quasar::SystemConfig::Version>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, quasar::SystemConfig::Version>, std::less<std::string>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } paramMinVersionMap; 
        struct map<std::string, quasar::SystemConfig::Version, std::less<std::string>, std::allocator<std::pair<const std::string, quasar::SystemConfig::Version>>> { 
            struct __tree<std::__value_type<std::string, quasar::SystemConfig::Version>, std::__map_value_compare<std::string, std::__value_type<std::string, quasar::SystemConfig::Version>, std::less<std::string>>, std::allocator<std::__value_type<std::string, quasar::SystemConfig::Version>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, quasar::SystemConfig::Version>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, quasar::SystemConfig::Version>, std::less<std::string>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } paramMaxVersionMap; 
        struct map<std::string, std::set<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::set<std::string>>>> { 
            struct __tree<std::__value_type<std::string, std::set<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::set<std::string>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::set<std::string>>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::set<std::string>>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::set<std::string>>, std::less<std::string>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } requiredParams; 
        int state; 
    }  _sysConfig;
    unsigned long long  _vectorSize;
}

@property (nonatomic, retain) NSString *configRoot;
@property (nonatomic) <EARAudioResultsGeneratorDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addAudio:(id)arg1;
- (id)audioResultLastVector;
- (id)audioResultMatrix;
- (id)configRoot;
- (id)delegate;
- (void)endAudio;
- (id)initWithConfigFile:(id)arg1 configRoot:(id)arg2 sampleRate:(unsigned long long)arg3 delegate:(id)arg4 queue:(id)arg5;
- (id)queue;
- (void)resetForNewRequest;
- (void)setConfigRoot:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;

@end
