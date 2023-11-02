
@interface CNVisualSimilarity : NSObject

+ (id)fingerprintForData:(id)arg1;
+ (bool)isData:(id)arg1 similarTo:(id)arg2;
+ (bool)isFingerprint:(id)arg1 similarTo:(id)arg2;
+ (bool)isFingerprint:(id)arg1 similarTo:(id)arg2 threshold:(double)arg3;
+ (id)log;

@end
