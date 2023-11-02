
@interface UISSlotRemoteContent : NSObject <NSSecureCoding, UISSlotAnyContent> {
    unsigned char  _contentScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    unsigned int  _slotID;
}

@property (nonatomic, readonly) unsigned char contentScale;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRemote;
@property (nonatomic, readonly) bool shouldReplaceExistingContent;
@property (nonatomic, readonly) unsigned int slotID;
@property (readonly) Class superclass;

+ (id)newLayerContext;
+ (bool)supportsSecureCoding;

- (unsigned char)contentScale;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)deleteFromLayerContext:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentSize:(struct CGSize { double x1; double x2; })arg1 contentScale:(unsigned char)arg2 localImage:(struct CGImage { }*)arg3 toLayerContext:(id*)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isRemote;
- (id)newTouchAuthenticationSpecificationWithAuthenticationMessageContext:(unsigned long long)arg1 backgroundStatisticsRegion:(struct { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; })arg2 backgroundStatisticsForeground:(float)arg3 backgroundStatisticsPassingContrast:(float)arg4 backgroundStatisticsFailingContrast:(float)arg5 hitTestInformationMask:(unsigned long long)arg6 initialSampleEvent:(long long)arg7 secureName:(unsigned int)arg8;
- (bool)shouldReplaceExistingContent;
- (unsigned int)slotID;
- (void)transferFromLayerContext:(id)arg1 toLayerContextWithId:(unsigned long long)arg2;

@end
