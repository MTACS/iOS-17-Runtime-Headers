
@interface WK_RTCRtpFragmentationHeader : NSObject {
    NSArray * _fragmentationLength;
    NSArray * _fragmentationOffset;
    NSArray * _fragmentationPlType;
    NSArray * _fragmentationTimeDiff;
}

@property (nonatomic, retain) NSArray *fragmentationLength;
@property (nonatomic, retain) NSArray *fragmentationOffset;
@property (nonatomic, retain) NSArray *fragmentationPlType;
@property (nonatomic, retain) NSArray *fragmentationTimeDiff;

- (void).cxx_destruct;
- (id)fragmentationLength;
- (id)fragmentationOffset;
- (id)fragmentationPlType;
- (id)fragmentationTimeDiff;
- (void)setFragmentationLength:(id)arg1;
- (void)setFragmentationOffset:(id)arg1;
- (void)setFragmentationPlType:(id)arg1;
- (void)setFragmentationTimeDiff:(id)arg1;

@end
