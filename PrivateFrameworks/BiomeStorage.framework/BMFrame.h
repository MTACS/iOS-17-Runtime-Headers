
@interface BMFrame : NSObject {
    double  _creationTimestamp;
    NSData * _data;
    unsigned long long  _datastoreVersion;
    union { 
        struct { 
            union { 
                struct { 
                    unsigned int size; 
                    unsigned int state; 
                } frameStatus; 
                unsigned long long frameStatusData; 
            } ; 
            struct { 
                double creationTimestamp; 
                double modifiedTimestamp; 
                unsigned int checksum; 
                unsigned int dataVersion; 
            } otherInfo; 
        } frameHeaderV1; 
        struct { 
            unsigned int checksum; 
            unsigned int dataVersion; 
        } frameHeaderV2; 
    }  _frameHeader;
    void * _framePtr;
    unsigned long long  _nextOffset;
    unsigned long long  _offset;
    unsigned int  _state;
    NSString * _storePath;
}

@property (nonatomic, readonly) double creationTimestamp;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (nonatomic, readonly) unsigned long long datastoreVersion;
@property (nonatomic, readonly) union { struct { union { struct { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct { double x_2_2_1; double x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; } x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; } frameHeader;
@property (nonatomic, readonly) void*framePtr;
@property (nonatomic, readonly) double modifiedTimestamp;
@property (nonatomic, readonly) unsigned long long nextOffset;
@property (nonatomic, readonly) unsigned long long offset;
@property (nonatomic, readonly) unsigned int state;
@property (nonatomic, readonly) NSString *storePath;

- (void).cxx_destruct;
- (double)creationTimestamp;
- (id)data;
- (unsigned int)dataVersion;
- (unsigned long long)datastoreVersion;
- (union { struct { union { struct { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct { double x_2_2_1; double x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; } x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })frameHeader;
- (void*)framePtr;
- (id)initWithHeader:(union { struct { union { struct { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; struct { double x_2_2_1; double x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; } x_1_1_2; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1 storePath:(id)arg2 data:(id)arg3 framePtr:(void*)arg4 offset:(unsigned long long)arg5 nextOffset:(unsigned long long)arg6 timestamp:(double)arg7 datastoreVersion:(unsigned long long)arg8 state:(unsigned int)arg9;
- (double)modifiedTimestamp;
- (unsigned long long)nextOffset;
- (unsigned long long)offset;
- (unsigned int)state;
- (id)storePath;

@end
