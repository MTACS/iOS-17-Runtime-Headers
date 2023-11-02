
@interface TRINotificationState : NSObject <TRINotificationToken> {
    int  _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int token;

- (id)initWithToken:(int)arg1;
- (int)token;

@end
