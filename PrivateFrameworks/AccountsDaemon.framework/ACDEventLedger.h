
@interface ACDEventLedger : NSObject {
    char * _crashInfoString;
    NSMutableArray * _eventLedger;
}

@property (retain) NSMutableArray *eventLedger;

+ (id)sharedLedger;

- (void).cxx_destruct;
- (id)eventLedger;
- (id)historyDescription;
- (id)init;
- (void)recordEvent:(id)arg1;
- (void)setEventLedger:(id)arg1;
- (void)simulateCrashWithMessage:(id)arg1;

@end
