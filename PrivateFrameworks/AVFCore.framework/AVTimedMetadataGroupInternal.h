
@interface AVTimedMetadataGroupInternal : NSObject {
    struct opaqueCMSampleBuffer { } * backingSBuf;
    NSArray * items;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  timeRange;
}

@end
