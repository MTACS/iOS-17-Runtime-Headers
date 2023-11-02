
@interface ICASPrivateEventData : NSObject <AADataEventType> {
    NSString * _privateSessionID;
    ICASSessionDetailType * _sessionDetailType;
}

@property (nonatomic, readonly) NSString *privateSessionID;
@property (nonatomic, readonly) ICASSessionDetailType *sessionDetailType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithPrivateSessionID:(id)arg1 sessionDetailType:(id)arg2;
- (id)privateSessionID;
- (id)sessionDetailType;
- (id)toDict;

@end
