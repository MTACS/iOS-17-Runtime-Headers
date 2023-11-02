
@interface _WDActivityNode : NSObject {
    <WDUserActivityResponder> * _nextResponder;
    NSDictionary * _nextResponderActivity;
    <WDUserActivityResponder> * _responder;
    NSMutableDictionary * _responderActivity;
    NSMapTable * _responderTable;
}

@property (nonatomic) <WDUserActivityResponder> *nextResponder;
@property (nonatomic) <WDUserActivityResponder> *responder;

- (void).cxx_destruct;
- (id)_nextNode;
- (void)addActivitiesToArray:(id)arg1 currentNode:(id)arg2;
- (id)changeActivityForResponder:(id)arg1 activityDictionary:(id)arg2;
- (id)description;
- (id)initWithResponder:(id)arg1;
- (id)nextResponder;
- (id)responder;
- (void)setNextResponder:(id)arg1;
- (void)setResponder:(id)arg1;
- (id)transitionActivityForResponder:(id)arg1 newResponder:(id)arg2 transitionDictionary:(id)arg3;

@end
