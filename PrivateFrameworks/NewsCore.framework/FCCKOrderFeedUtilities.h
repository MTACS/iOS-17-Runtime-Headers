
@interface FCCKOrderFeedUtilities : NSObject

+ (long long)_feedBinFromFeedID:(id)arg1;
+ (unsigned long long)_orderFeedTopKFromBin:(long long)arg1 timeInterval:(double)arg2;
+ (id)orderFeedIDFromFeedID:(id)arg1;
+ (id)orderFeedRequestForFeedID:(id)arg1 feedRange:(id)arg2;

@end
