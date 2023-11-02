
@interface _SSBServiceStatus : NSObject {
    struct ServiceStatus { 
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
        } m_name; 
        int m_pid; 
        struct vector<std::string, std::allocator<std::string>> { 
            void *__begin_; 
            void *__end_; 
            struct __compressed_pair<std::string *, std::allocator<std::string>> { 
                void *__value_; 
            } __end_cap_; 
        } m_activeTransactions; 
        struct vector<SafeBrowsing::ServiceStatus::Connection, std::allocator<SafeBrowsing::ServiceStatus::Connection>> { 
            struct Connection {} *__begin_; 
            struct Connection {} *__end_; 
            struct __compressed_pair<SafeBrowsing::ServiceStatus::Connection *, std::allocator<SafeBrowsing::ServiceStatus::Connection>> { 
                struct Connection {} *__value_; 
            } __end_cap_; 
        } m_connections; 
        struct vector<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus, std::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> { 
            struct DatabaseUpdaterStatus {} *__begin_; 
            struct DatabaseUpdaterStatus {} *__end_; 
            struct __compressed_pair<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus *, std::allocator<SafeBrowsing::ServiceStatus::DatabaseUpdaterStatus>> { 
                struct DatabaseUpdaterStatus {} *__value_; 
            } __end_cap_; 
        } m_databaseUpdatersStatuses; 
    }  _serviceStatus;
}

@property (nonatomic, readonly, copy) NSArray *activeTransactions;
@property (nonatomic, readonly) unsigned long long connectionCount;
@property (nonatomic, readonly) unsigned long long databaseUpdaterState;
@property (nonatomic, readonly) NSArray *databaseUpdatersStatuses;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) int processIdentifier;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)activeTransactions;
- (id)bundleIdentifierForConnectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)connectionCount;
- (unsigned long long)databaseUpdaterState;
- (id)databaseUpdatersStatuses;
- (id)initWithServiceStatus:(struct ServiceStatus { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x_1_5_1; unsigned long long x_1_5_2; unsigned int x_1_5_3 : 63; unsigned int x_1_5_4 : 1; } x_1_4_1; struct __short { BOOL x_2_5_1[23]; unsigned char x_2_5_2[0]; unsigned int x_2_5_3 : 7; unsigned int x_2_5_4 : 1; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; int x2; struct vector<std::string, std::allocator<std::string>> { void *x_3_1_1; void *x_3_1_2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_2_1; } x_3_1_3; } x3; struct vector<SafeBrowsing::ServiceStatus::Connection, std::allocator<SafeBrowsing::ServiceStatus::Connection>> { struct Connection {} *x_4_1_1; struct Connection {} *x_4_1_2; struct __compressed_pair<SafeBrowsing::ServiceStatus::Connection *, std::allocator<SafeBrowsing::ServiceStatus::Connection>> { struct Connection {} *x_3_2_1; } x_4_1_3; } x4; })arg1;
- (id)name;
- (int)processIdentifier;
- (int)processIdentifierForConnectionAtIndex:(unsigned long long)arg1;

@end
