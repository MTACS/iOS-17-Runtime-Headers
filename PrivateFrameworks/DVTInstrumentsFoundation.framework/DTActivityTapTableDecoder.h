
@interface DTActivityTapTableDecoder : NSObject {
    BOOL  _buffer;
    struct { 
        unsigned char time; 
        unsigned char category; 
        unsigned char subsystem; 
        unsigned char senderImagePath; 
        unsigned char format; 
        unsigned char message; 
        unsigned char backtrace; 
        unsigned char process; 
        unsigned char thread; 
        unsigned char messageType; 
        unsigned char senderImageUUID; 
        unsigned char senderImageOffset; 
        unsigned char senderImageName; 
        unsigned char timezoneName; 
        unsigned char unixTimeInterval; 
        unsigned char processImagePath; 
    }  _columns;
    DTActivityTraceTapMemo * _currentChunk;
    struct unique_ptr<DTStateActionDecoder, std::default_delete<DTStateActionDecoder>> { 
        struct __compressed_pair<DTStateActionDecoder *, std::default_delete<DTStateActionDecoder>> { 
            struct DTStateActionDecoder {} *__value_; 
        } __ptr_; 
    }  _decoder;
    bool  _failed;
    NSMutableArray * _memos;
    unsigned char  _osLogTableID;
    bool  _outOfData;
    XRIntKeyedDictionary * _processesByPID;
    NSMutableData * _stack;
    struct unique_ptr<DTTableRowDecoder, std::default_delete<DTTableRowDecoder>> { 
        struct __compressed_pair<DTTableRowDecoder *, std::default_delete<DTTableRowDecoder>> { 
            struct DTTableRowDecoder {} *__value_; 
        } __ptr_; 
    }  _tableRowDecoder;
    XRIntKeyedDictionary * _threadsByTID;
}

@property (nonatomic, readonly) XRConstantEngineeringValue *backtrace;
@property (nonatomic, readonly) NSString *category;
@property (getter=hasFailed, nonatomic, readonly) bool failed;
@property (nonatomic, readonly) NSString *format;
@property (nonatomic, readonly) XRConstantEngineeringValue *message;
@property (nonatomic, readonly) unsigned char messageType;
@property (getter=isOutOfData, nonatomic, readonly) bool outOfData;
@property (nonatomic, readonly) XRConstantEngineeringValue *process;
@property (nonatomic, readonly) NSString *processImagePath;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) NSString *senderImageName;
@property (nonatomic, readonly) unsigned long long senderImageOffset;
@property (nonatomic, readonly) NSString *senderImagePath;
@property (nonatomic, readonly) XRConstantEngineeringValue *senderImageUUID;
@property (nonatomic, readonly) NSString *subsystem;
@property (nonatomic, readonly) XRConstantEngineeringValue *thread;
@property (nonatomic, readonly) unsigned long long time;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly) double unixTimeInterval;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addData:(id)arg1;
- (void)addMemo:(id)arg1;
- (id)backtrace;
- (id)category;
- (id)format;
- (bool)hasFailed;
- (id)init;
- (bool)isOutOfData;
- (id)message;
- (unsigned char)messageType;
- (bool)next;
- (id)process;
- (id)processImagePath;
- (id)processName;
- (id)senderImageName;
- (unsigned long long)senderImageOffset;
- (id)senderImagePath;
- (id)senderImageUUID;
- (id)subsystem;
- (id)thread;
- (unsigned long long)time;
- (id)timeZone;
- (double)unixTimeInterval;

@end
