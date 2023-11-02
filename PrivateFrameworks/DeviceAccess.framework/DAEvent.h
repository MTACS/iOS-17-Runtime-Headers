
@interface DAEvent : NSObject <CUXPCCodable, NSSecureCoding> {
    NSError * _error;
    long long  _eventType;
}

@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly) long long eventType;

+ (id)allocInitWithXPCObject:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCObject:(id)arg1;
- (id)error;
- (long long)eventType;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventType:(long long)arg1;
- (id)initWithEventType:(long long)arg1 error:(id)arg2;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;

@end
