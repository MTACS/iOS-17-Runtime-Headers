
@interface AVSampleCursorInternal : NSObject {
    struct OpaqueFigSampleCursor { } * figSampleCursor;
    bool  implementsCopyChunkDetails;
    bool  implementsCopySampleLocation;
    bool  implementsCreateSampleBuffer;
    bool  implementsGetDecodeTimeStamp;
    bool  implementsGetDependencyInfo;
    bool  implementsGetDuration;
    bool  implementsGetMPEG2FrameType;
    bool  implementsTestReorderingBoundary;
}

@end
