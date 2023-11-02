
@interface ABPKSinglePerson2DResult : NSObject {
    bool  _isPoseValid;
    ABPK2dSkeleton * _skeleton2D;
    unsigned int  _trackingId;
}

@property (nonatomic, readonly) bool isPoseValid;
@property (nonatomic, readonly) ABPK2dSkeleton *skeleton2D;
@property (nonatomic, readonly) unsigned int trackingId;

- (void).cxx_destruct;
- (id)init;
- (bool)isPoseValid;
- (int)overlayResultOnImage:(void *)arg1 withResult:(void *)arg2 withColor:(void *)arg3; // needs 3 arg types, found 2: struct __CVBuffer { }*, struct __CVBuffer { }*
- (void)set2dSkeleton:(id)arg1 isPoseValid:(bool)arg2 trackingId:(unsigned int)arg3;
- (id)skeleton2D;
- (unsigned int)trackingId;

@end
