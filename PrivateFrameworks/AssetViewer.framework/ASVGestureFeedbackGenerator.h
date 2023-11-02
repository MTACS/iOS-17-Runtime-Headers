
@interface ASVGestureFeedbackGenerator : NSObject {
    <ASVFeedbackGenerator> * _snapAwayFromScaleFeedbackGenerator;
    <ASVFeedbackGenerator> * _snapToScaleFeedbackGenerator;
}

@property (nonatomic, retain) <ASVFeedbackGenerator> *snapAwayFromScaleFeedbackGenerator;
@property (nonatomic, retain) <ASVFeedbackGenerator> *snapToScaleFeedbackGenerator;

- (void).cxx_destruct;
- (id)initWithSnapToGenerator:(id)arg1 snapAwayFromGenerator:(id)arg2;
- (void)prepare;
- (void)setSnapAwayFromScaleFeedbackGenerator:(id)arg1;
- (void)setSnapToScaleFeedbackGenerator:(id)arg1;
- (id)snapAwayFromScaleFeedbackGenerator;
- (id)snapToScaleFeedbackGenerator;

@end
