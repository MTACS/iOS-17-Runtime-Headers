
@interface HMISignpost : HMFObject <HMFLogging> {
    NSDate * _beginDate;
    NSUUID * _identifier;
    NSString * _name;
    unsigned long long  _signpostIdentifier;
}

@property (readonly) NSDate *beginDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *name;
@property (readonly) unsigned long long signpostIdentifier;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)begin;
- (id)beginDate;
- (void)end;
- (bool)hasBegun;
- (id)identifier;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 deferred:(bool)arg2;
- (id)logIdentifier;
- (id)name;
- (bool)shouldSignpost;
- (unsigned long long)signpostIdentifier;
- (id)signpostLog;

@end
