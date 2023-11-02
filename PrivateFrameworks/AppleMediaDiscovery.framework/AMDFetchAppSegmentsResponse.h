
@interface AMDFetchAppSegmentsResponse : NSObject {
    NSDictionary * _metadata;
    NSArray * _segmentInfo;
    NSNumber * _segmentInfoType;
}

@property (retain) NSDictionary *metadata;
@property (retain) NSArray *segmentInfo;
@property (retain) NSNumber *segmentInfoType;

- (void).cxx_destruct;
- (id)getMetadata;
- (id)getSegmentInfo;
- (id)getSegmentInfoType;
- (id)initWithSegmentInfo:(id)arg1 ofType:(id)arg2 andMetaData:(id)arg3;
- (id)metadata;
- (id)segmentInfo;
- (id)segmentInfoType;
- (void)setMetadata:(id)arg1;
- (void)setSegmentInfo:(id)arg1;
- (void)setSegmentInfoType:(id)arg1;

@end
