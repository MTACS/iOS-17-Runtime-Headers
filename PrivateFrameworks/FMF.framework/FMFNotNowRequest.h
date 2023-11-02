
@interface FMFNotNowRequest : NSObject <NSCopying, NSSecureCoding> {
    FMFHandle * _fromHandle;
    NSString * _requestId;
    NSSet * _toHandles;
}

@property (nonatomic, retain) FMFHandle *fromHandle;
@property (nonatomic, retain) NSString *requestId;
@property (nonatomic, retain) NSSet *toHandles;

+ (id)notNowRequestToHandles:(id)arg1 fromHandle:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fromHandle;
- (id)initWithCoder:(id)arg1;
- (id)initWithFromHandle:(id)arg1 toHandle:(id)arg2 requestId:(id)arg3;
- (id)requestId;
- (void)setFromHandle:(id)arg1;
- (void)setRequestId:(id)arg1;
- (void)setToHandles:(id)arg1;
- (id)toHandles;

@end
