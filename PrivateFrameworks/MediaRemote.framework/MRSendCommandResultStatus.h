
@interface MRSendCommandResultStatus : NSObject <NSCopying> {
    NSError * _commandError;
    NSData * _customData;
    NSString * _customDataType;
    MRSendCommandHandlerDialog * _dialog;
    unsigned int  _statusCode;
    long long  _statusType;
}

@property (nonatomic, readonly, copy) NSError *commandError;
@property (nonatomic, readonly, copy) NSData *customData;
@property (nonatomic, readonly, copy) NSString *customDataType;
@property (nonatomic, readonly) MRSendCommandHandlerDialog *dialog;
@property (nonatomic, readonly, copy) _MRSendCommandResultStatusProtobuf *protobuf;
@property (nonatomic, readonly) unsigned int statusCode;
@property (nonatomic, readonly) long long statusType;

+ (id)statusWithCode:(unsigned int)arg1;
+ (id)statusWithCode:(unsigned int)arg1 customData:(id)arg2 type:(id)arg3;
+ (id)statusWithCode:(unsigned int)arg1 dialog:(id)arg2;
+ (id)statusWithCode:(unsigned int)arg1 error:(id)arg2;
+ (id)successStatus;

- (void).cxx_destruct;
- (id)commandError;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customData;
- (id)customDataType;
- (id)description;
- (id)dialog;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithStatusType:(long long)arg1 statusCode:(unsigned int)arg2 dialog:(id)arg3 customData:(id)arg4 customDataType:(id)arg5 error:(id)arg6;
- (id)protobuf;
- (unsigned int)statusCode;
- (long long)statusType;

@end
