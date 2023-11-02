
@interface AVSampleBufferGeneratorInternal : NSObject {
    struct OpaqueFigSampleGenerator { } * figSampleGenerator;
    struct OpaqueCMTimebase { } * timebase;
    AVWeakReference * weakReferenceToAsset;
}

@end
