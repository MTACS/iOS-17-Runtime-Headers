
@interface IDSIDInfoResult : NSObject <NSSecureCoding> {
    NSArray * _endpoints;
    IDSGameCenterData * _gameCenterData;
    IDSIDKTData * _ktData;
    long long  _status;
    NSString * _uri;
}

@property (nonatomic, readonly, copy) NSArray *endpoints;
@property (nonatomic, readonly, copy) IDSGameCenterData *gameCenterData;
@property (nonatomic, readonly, copy) IDSIDKTData *ktData;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly, copy) NSString *uri;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoints;
- (id)gameCenterData;
- (id)initWithCoder:(id)arg1;
- (id)initWithURI:(id)arg1 status:(long long)arg2 endpoints:(id)arg3 ktData:(id)arg4 gameCenterData:(id)arg5;
- (id)ktData;
- (long long)status;
- (id)uri;

@end
