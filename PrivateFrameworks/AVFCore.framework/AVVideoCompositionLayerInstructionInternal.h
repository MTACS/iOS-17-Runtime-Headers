
@interface AVVideoCompositionLayerInstructionInternal : NSObject {
    NSMutableArray * cropRectangleRamps;
    NSMutableArray * opacityRamps;
    int  trackID;
    NSMutableArray * transformRamps;
}

@end
