
@interface SBFTapticEngine : NSObject {
    NSMutableSet * _cancelledReasons;
    NSObject<OS_dispatch_queue> * _cancelledReasonsQueue;
    NSMutableSet * _commitReasons;
    NSObject<OS_dispatch_queue> * _commitReasonsQueue;
    NSMutableSet * _previewReasons;
    NSObject<OS_dispatch_queue> * _previewReasonsQueue;
    bool  _supportsFeedbackActuation;
    _UITapticEngine * _tapticEngine;
}

@property (nonatomic, readonly) bool supportsFeedbackActuation;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)actuateFeedback:(long long)arg1;
- (void)coolDownForFeedback:(unsigned long long)arg1 withReason:(id)arg2;
- (id)init;
- (bool)supportsFeedbackActuation;
- (void)warmUpForFeedback:(unsigned long long)arg1 withReason:(id)arg2;

@end
