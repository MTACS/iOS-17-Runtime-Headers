
@interface SKStatusPublishRequest : NSObject <NSSecureCoding> {
    NSDate * _dateCreated;
    bool  _isScheduledRequest;
    bool  _isSecondaryDeviceRepublish;
    SKStatusPayload * _statusPayload;
    NSString * _statusUniqueIdentifier;
}

@property (nonatomic, retain) NSDate *dateCreated;
@property (nonatomic) bool isScheduledRequest;
@property (nonatomic) bool isSecondaryDeviceRepublish;
@property (nonatomic, readonly, copy) SKStatusPayload *statusPayload;
@property (nonatomic, retain) NSString *statusUniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateCreated;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatusPayload:(id)arg1;
- (id)initWithStatusPayload:(id)arg1 isScheduledRequest:(bool)arg2;
- (bool)isScheduledRequest;
- (bool)isSecondaryDeviceRepublish;
- (void)setDateCreated:(id)arg1;
- (void)setIsScheduledRequest:(bool)arg1;
- (void)setIsSecondaryDeviceRepublish:(bool)arg1;
- (void)setStatusUniqueIdentifier:(id)arg1;
- (id)statusPayload;
- (id)statusUniqueIdentifier;

@end
