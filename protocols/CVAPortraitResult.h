
@protocol CVAPortraitResult <NSObject>

@required

- (<CVAMattingResult> *)mattingResult;
- (struct __CVBuffer { }*)portraitPixelBuffer;
- (float)portraitStability;
- (float)relightingStability;

@end
