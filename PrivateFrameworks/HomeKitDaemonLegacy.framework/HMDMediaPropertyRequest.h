
@interface HMDMediaPropertyRequest : HMFObject {
    HMDMediaProfile * _mediaProfile;
    id  _previousValue;
    NSString * _property;
}

@property (nonatomic, readonly) HMDMediaProfile *mediaProfile;
@property (nonatomic, readonly) id previousValue;
@property (nonatomic, readonly) NSString *property;

+ (id)deserializeReadRequests:(id)arg1 mediaProfile:(id)arg2;
+ (id)requestWithProperty:(id)arg1 mediaProfile:(id)arg2;
+ (id)serializeReadRequests:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithProperty:(id)arg1 mediaProfile:(id)arg2;
- (id)mediaProfile;
- (id)previousValue;
- (id)property;

@end
