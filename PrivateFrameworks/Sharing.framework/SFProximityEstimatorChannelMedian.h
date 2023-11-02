
@interface SFProximityEstimatorChannelMedian : SFProximityEstimator {
    struct { 
        unsigned char channel; 
        BOOL rssiValues[3]; 
        unsigned char rssiIndex; 
        unsigned char rssiCount; 
        BOOL rssiMedian; 
    }  _channels;
}

- (int)_estimateRSSIForSFBLEDevice:(id)arg1;
- (id)description;

@end
