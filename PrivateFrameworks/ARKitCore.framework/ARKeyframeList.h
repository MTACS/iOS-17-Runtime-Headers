
@interface ARKeyframeList : NSObject <ARResultData> {
    struct CV3DReconKeyframeList { } * _keyframeList;
    NSSet * _removedAnchors;
    double  _timestamp;
    NSSet * _updatedAnchors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CV3DReconKeyframeList { }*keyframeList;
@property (retain) NSSet *removedAnchors;
@property (readonly) Class superclass;
@property (retain) NSSet *updatedAnchors;

- (void).cxx_destruct;
- (void)dealloc;
- (struct CV3DReconKeyframeList { }*)keyframeList;
- (id)removedAnchors;
- (void)setKeyframeList:(struct CV3DReconKeyframeList { }*)arg1 updatedAnchors:(id)arg2 removedAnchors:(id)arg3 timestamp:(double)arg4;
- (void)setRemovedAnchors:(id)arg1;
- (void)setUpdatedAnchors:(id)arg1;
- (double)timestamp;
- (id)updatedAnchors;

@end
