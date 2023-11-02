
@interface MRRequestDetails : NSObject <NSSecureCoding> {
    NSData * _date;
    NSString * _name;
    unsigned int  _qos;
    NSString * _reason;
    NSString * _requestID;
    NSDate * _startDate;
    bool  _userInitiated;
}

@property (nonatomic, readonly) NSData *date;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) _MRRequestDetailsProtobuf *protobuf;
@property (nonatomic, readonly) unsigned int qos;
@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) NSString *requestID;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) bool userInitiated;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithName:(id)arg1 requestID:(id)arg2 reason:(id)arg3;
- (id)initWithName:(id)arg1 requestID:(id)arg2 reason:(id)arg3 userInitiated:(bool)arg4;
- (id)initWithProtobuf:(id)arg1;
- (id)name;
- (id)protobuf;
- (unsigned int)qos;
- (id)reason;
- (id)requestID;
- (id)startDate;
- (bool)userInitiated;

@end
