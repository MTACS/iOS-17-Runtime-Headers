
@interface AAEventData : NSObject <AADataEventType> {
    void appSessionID;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  eventDate;
    void eventID;
    void eventPath;
    void sessionID;
}

@property (nonatomic, readonly) NSString *appSessionID;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) NSString *eventID;
@property (nonatomic, readonly) NSString *eventPath;
@property (nonatomic, readonly) NSString *sessionID;

+ (id)dataName;

- (void).cxx_destruct;
- (id)appSessionID;
- (id)eventDate;
- (id)eventID;
- (id)eventPath;
- (id)init;
- (id)sessionID;
- (id)toDict;

@end
