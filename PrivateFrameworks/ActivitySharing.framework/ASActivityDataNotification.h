
@interface ASActivityDataNotification : NSObject {
    ASFriend * _friend;
    id  _sample;
}

@property (nonatomic, retain) ASFriend *friend;
@property (nonatomic, retain) id sample;

- (void).cxx_destruct;
- (id)friend;
- (id)sample;
- (void)setFriend:(id)arg1;
- (void)setSample:(id)arg1;

@end
