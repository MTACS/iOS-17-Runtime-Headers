
@interface IKPlayerRequestSeekToDateEventUserInfo : NSObject <IKPlayerEventMarshaling> {
    NSDate * _currentDate;
    NSDate * _proposedDate;
    NSDate * _requestedDate;
    bool  _shouldSeek;
}

@property (nonatomic, readonly) NSDate *currentDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly) NSDate *proposedDate;
@property (nonatomic, readonly) NSDate *requestedDate;
@property (nonatomic, readonly) bool shouldSeek;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)currentDate;
- (id)initWithRequestDate:(id)arg1 currentDate:(id)arg2;
- (void)processReturnJSValue:(id)arg1 inContext:(id)arg2;
- (id)properties;
- (id)proposedDate;
- (id)requestedDate;
- (bool)shouldSeek;

@end
