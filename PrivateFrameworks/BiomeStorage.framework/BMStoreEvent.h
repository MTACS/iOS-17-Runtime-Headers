
@interface BMStoreEvent : NSObject <ATXTimedEventProtocol, BMStoreEvent, NSSecureCoding> {
    Class  _dataType;
    unsigned char  _error;
    <BMStoreData> * _eventBody;
    NSData * _eventBodyData;
    unsigned int  _eventBodyDataVersion;
    unsigned long long  _eventCategory;
    BMFrame * _frame;
    unsigned long long  _frameOffset;
    BMStreamMetadata * _metadata;
    NSString * _segmentName;
    double  _timestamp;
}

@property (nonatomic, readonly) Class dataType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned char error;
@property (nonatomic, readonly) <BMStoreData> *eventBody;
@property (nonatomic, readonly) NSData *eventBodyData;
@property (nonatomic, readonly) unsigned int eventBodyDataVersion;
@property (nonatomic, readonly) unsigned long long eventCategory;
@property (nonatomic, readonly) BMFrame *frame;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BMStreamMetadata *metadata;
@property (nonatomic, readonly) NSString *segmentName;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;

// Image: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage

+ (id)eventWithEventType:(Class)arg1 eventData:(id)arg2 dataVersion:(unsigned int)arg3;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bookmark;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (Class)dataType;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)error;
- (id)eventBody;
- (id)eventBodyData;
- (unsigned int)eventBodyDataVersion;
- (unsigned long long)eventCategory;
- (id)frame;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventBody:(id)arg1 timestamp:(double)arg2;
- (id)initWithFrame:(id)arg1 error:(unsigned char)arg2;
- (id)initWithFrame:(id)arg1 error:(unsigned char)arg2 metadata:(id)arg3;
- (id)initWithFrame:(id)arg1 segmentName:(id)arg2 error:(unsigned char)arg3 eventCategory:(unsigned long long)arg4 metadata:(id)arg5 dataType:(Class)arg6;
- (id)initWithFrame:(id)arg1 segmentName:(id)arg2 frameOffset:(unsigned long long)arg3 eventBodyData:(id)arg4 eventBodyDataVersion:(unsigned int)arg5 dataType:(Class)arg6 eventCategory:(unsigned long long)arg7 timestamp:(double)arg8 metadata:(id)arg9 error:(unsigned char)arg10;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)segmentName;
- (double)timestamp;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (id)eventTime;

// Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams

- (id)json;
- (id)jsonDictionary;

@end
