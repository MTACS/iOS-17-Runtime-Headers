
@interface SIMovReader : NSObject {
    int  _bufferEOFCount;
    unsigned char  _lcmfps;
    struct unordered_map<std::string, __CVBuffer *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, __CVBuffer *>>> { 
        struct __hash_table<std::__hash_value_type<std::string, __CVBuffer *>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, __CVBuffer *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, __CVBuffer *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, __CVBuffer *>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _pixelBufferMap;
    int  _readCount;
    MOVStreamReader * _reader;
    NSMutableDictionary * trackInfos;
}

@property (nonatomic, retain) MOVStreamReader *reader;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (struct __CVBuffer { }*)getCurrentReadBufferForTrack:(id)arg1;
- (id)initReaderWithVideoURL:(id)arg1 andTrackName:(id)arg2;
- (id)initReaderWithVideoURL:(id)arg1 trackList:(id)arg2;
- (struct __CVBuffer { }*)readFrame:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;
- (long long)readNextAvaliableFrame:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;
- (id)reader;
- (void)setReader:(id)arg1;

@end
