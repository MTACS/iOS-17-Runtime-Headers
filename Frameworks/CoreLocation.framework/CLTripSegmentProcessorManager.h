
@interface CLTripSegmentProcessorManager : NSObject {
    struct CLTripSegmentProcessor { 
        struct CLDistanceCalc { 
            double fM; 
            double fN; 
            double fRefLatRads; 
            double fRefLatDegs; 
            double fCosRefLat; 
        } fDistanceCalculator; 
        struct CLOSTransactionWrapper { 
            CLOSTransaction *inMemoryTransaction_; 
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
            } name_; 
        } fOSTransaction; 
        struct CLTripSegmentRecorder { 
            bool fRecordingEnabled; 
        } fRecorder; 
    }  cltsp;
    NSObject<OS_dispatch_queue> * fQueue;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearMapHelperMemoryAndExitCleanly;
- (void)dealloc;
- (id)errorObject:(long long)arg1 description:(id)arg2;
- (id)init;
- (void)processTripSegmentData:(id)arg1 outputHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)processTripSegmentData:(id)arg1 withOptions:(id)arg2 outputHandler:(id /* block */)arg3;
- (void)processTripSegmentData:(id)arg1 withOptions:(id)arg2 outputHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;

@end
