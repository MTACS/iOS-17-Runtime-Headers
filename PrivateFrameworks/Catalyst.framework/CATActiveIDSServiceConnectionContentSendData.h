
@interface CATActiveIDSServiceConnectionContentSendData : NSObject <CATActiveIDSServiceConnectionMessageContent> {
    unsigned long long  _dataNumber;
    unsigned long long  _segmentNumber;
    NSNumber * _sequenceNumber;
    unsigned long long  _totalSegments;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  mSegmentRange;
    NSData * mUnderlyingDataSegment;
}

@property (nonatomic, readonly) long long contentType;
@property (nonatomic, readonly) unsigned long long dataNumber;
@property (nonatomic, readonly, copy) NSData *dataSegment;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) unsigned long long segmentNumber;
@property (nonatomic, readonly) NSNumber *sequenceNumber;
@property (nonatomic, readonly) unsigned long long totalSegments;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (long long)contentType;
- (unsigned long long)dataNumber;
- (id)dataSegment;
- (id)dictionaryValue;
- (id)initWithSequenceNumber:(id)arg1 dataNumber:(unsigned long long)arg2 dataSegment:(id)arg3 segmentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 segmentNumber:(unsigned long long)arg5 totalSegments:(unsigned long long)arg6;
- (unsigned long long)segmentNumber;
- (id)sequenceNumber;
- (unsigned long long)totalSegments;

@end
