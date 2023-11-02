
@interface NTKFaceSupportPartialUnlockAttemptEvent : NSObject {
    NSDate * _creationDate;
    NSString * _identifier;
    unsigned long long  _method;
}

@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long method;

- (void).cxx_destruct;
- (id)creationDate;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 method:(unsigned long long)arg2;
- (unsigned long long)method;
- (id)unlockAttemptWithStatus:(unsigned long long)arg1 errorCode:(long long)arg2;

@end
