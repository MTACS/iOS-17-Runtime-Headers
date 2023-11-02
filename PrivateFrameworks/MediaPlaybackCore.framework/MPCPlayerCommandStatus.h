
@interface MPCPlayerCommandStatus : NSObject {
    MPCPlayerCommandDialog * _dialog;
    MPCPlayerCommandRequest * _request;
    MPRemoteCommandStatus * _status;
}

@property (nonatomic, readonly) NSData *customData;
@property (nonatomic, readonly) NSString *customDataType;
@property (nonatomic, readonly) MPCPlayerCommandDialog *dialog;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) MPCPlayerCommandRequest *request;
@property (nonatomic, readonly) MPRemoteCommandStatus *status;
@property (nonatomic, readonly) long long statusCode;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)customData;
- (id)customDataType;
- (id)description;
- (id)dialog;
- (id)error;
- (id)initWithMPStatus:(id)arg1 request:(id)arg2;
- (id)request;
- (id)status;
- (long long)statusCode;
- (long long)type;

@end
