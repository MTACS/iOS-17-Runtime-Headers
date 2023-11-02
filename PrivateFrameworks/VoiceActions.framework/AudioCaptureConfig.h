
@interface AudioCaptureConfig : NSObject {
    void leftOfStartFrameOffset;
    void rightOfEndFrameOffset;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic) long long leftOfStartFrameOffset;
@property (nonatomic) long long rightOfEndFrameOffset;

- (id)description;
- (id)init;
- (long long)leftOfStartFrameOffset;
- (long long)rightOfEndFrameOffset;
- (void)setLeftOfStartFrameOffset:(long long)arg1;
- (void)setRightOfEndFrameOffset:(long long)arg1;

@end
