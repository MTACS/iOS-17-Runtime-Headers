
@interface BMDSLStreamPublisher : BMDSL <BMDSLIdentifiable> {
    NSArray * _backingEvents;
    NSString * _basePath;
    <BMBookmark> * _bookmark;
    NSNumber * _bookmarkingTime;
    Class  _eventDataClass;
    NSString * _identifier;
    double  _startTime;
    unsigned long long  _streamType;
    NSString * _useCase;
}

@property (nonatomic, retain) NSArray *backingEvents;
@property (nonatomic, readonly) NSString *basePath;
@property (nonatomic, readonly) <BMBookmark> *bookmark;
@property (nonatomic, retain) NSNumber *bookmarkingTime;
@property (nonatomic, readonly) Class eventDataClass;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly) unsigned long long streamType;
@property (nonatomic, readonly, copy) NSString *useCase;

+ (bool)isStreamIdentifierValid:(id)arg1;
+ (bool)isStreamInfoValidForIdentifier:(id)arg1 basePath:(id)arg2 streamType:(unsigned long long)arg3;
+ (bool)isStreamTypeInValidRange:(unsigned long long)arg1;
+ (id)name;
+ (unsigned long long)streamTypeForDSLType:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backingEvents;
- (id)basePath;
- (id)bookmark;
- (id)bookmarkingTime;
- (id)bpsPublisher;
- (void)encodeWithCoder:(id)arg1;
- (Class)eventDataClass;
- (id)identifier;
- (id)initRestrictedStreamWithBookmark:(id)arg1 identifier:(id)arg2;
- (id)initRestrictedStreamWithPublisher:(id)arg1 identifier:(id)arg2;
- (id)initWithBookmark:(id)arg1 identifier:(id)arg2 name:(id)arg3 version:(unsigned int)arg4 streamType:(unsigned long long)arg5 basePath:(id)arg6;
- (id)initWithBookmark:(id)arg1 identifier:(id)arg2 name:(id)arg3 version:(unsigned int)arg4 streamType:(unsigned long long)arg5 basePath:(id)arg6 eventDataClass:(Class)arg7 useCase:(id)arg8;
- (id)initWithBookmark:(id)arg1 identifier:(id)arg2 privateStreamBasePath:(id)arg3;
- (id)initWithBookmark:(id)arg1 identifier:(id)arg2 startTime:(double)arg3 privateStreamBasePath:(id)arg4;
- (id)initWithBookmark:(id)arg1 identifier:(id)arg2 streamType:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithIdentifier:(id)arg1 streamType:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1 streamType:(unsigned long long)arg2 eventDataClass:(Class)arg3;
- (id)initWithIdentifier:(id)arg1 streamType:(unsigned long long)arg2 useCase:(id)arg3;
- (id)initWithIdentifier:(id)arg1 streamType:(unsigned long long)arg2 useCase:(id)arg3 eventDataClass:(Class)arg4;
- (id)initWithPublisher:(id)arg1 identifier:(id)arg2 streamType:(unsigned long long)arg3;
- (id)initWithStartTime:(double)arg1 identifier:(id)arg2 streamType:(unsigned long long)arg3;
- (void)setBackingEvents:(id)arg1;
- (void)setBookmarkingTime:(id)arg1;
- (double)startTime;
- (id)storeStream;
- (unsigned long long)streamType;
- (id)upstreams;
- (id)useCase;

@end
