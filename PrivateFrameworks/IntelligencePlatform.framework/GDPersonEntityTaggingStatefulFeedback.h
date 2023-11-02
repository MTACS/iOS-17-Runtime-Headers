
@interface GDPersonEntityTaggingStatefulFeedback : NSObject {
    GDPersonEntityTagEventIDSet * _eventIds;
    long long  _feedbackType;
}

@property (nonatomic, readonly) GDPersonEntityTagEventIDSet *eventIds;
@property (nonatomic, readonly) long long feedbackType;

- (void).cxx_destruct;
- (id)eventIds;
- (long long)feedbackType;
- (id)initWithStatefulFeedbackType:(long long)arg1 eventIds:(id)arg2;

@end
