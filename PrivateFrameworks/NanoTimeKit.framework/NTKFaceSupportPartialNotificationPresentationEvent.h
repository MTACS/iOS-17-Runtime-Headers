
@interface NTKFaceSupportPartialNotificationPresentationEvent : NSObject {
    NSDate * _creationDate;
    NSString * _identifier;
    NSDate * _pushDate;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSDate *pushDate;

- (void).cxx_destruct;
- (id)creationDate;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 pushDate:(id)arg2;
- (id)presentationEventWithStatus:(long long)arg1 artworkUsed:(long long)arg2 errorCode:(long long)arg3 optOutStatus:(long long)arg4;
- (id)pushDate;

@end
