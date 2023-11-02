
@interface DNDSXPCTimer : NSObject {
    NSDate * _date;
    NSString * _serviceIdentifier;
    bool  _userVisible;
}

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (getter=isUserVisible, nonatomic) bool userVisible;

- (void).cxx_destruct;
- (id)date;
- (id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 userVisible:(bool)arg3;
- (bool)isUserVisible;
- (id)serviceIdentifier;
- (void)setDate:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setUserVisible:(bool)arg1;

@end
