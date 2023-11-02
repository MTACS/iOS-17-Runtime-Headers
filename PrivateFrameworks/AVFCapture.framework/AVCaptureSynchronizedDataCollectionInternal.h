
@interface AVCaptureSynchronizedDataCollectionInternal : NSObject {
    unsigned long long  changeSeed;
    BOOL  count;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  creationTime;
    id * dataOutputs;
    BOOL  maxCount;
    NSArray * possibleDataOutputs;
    id * synchronizedData;
}

@end
