
@interface GTTpacketRequest : NSObject <NSSecureCoding> {
    NSString * _label;
    unsigned long long  _requestID;
    NSArray * _requests;
    NSString * _selector;
}

@property (nonatomic, retain) NSString *label;
@property (nonatomic) unsigned long long requestID;
@property (nonatomic, retain) NSArray *requests;
@property (nonatomic, retain) NSString *selector;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)label;
- (unsigned long long)requestID;
- (id)requests;
- (id)selector;
- (void)setLabel:(id)arg1;
- (void)setRequestID:(unsigned long long)arg1;
- (void)setRequests:(id)arg1;
- (void)setSelector:(id)arg1;

@end
