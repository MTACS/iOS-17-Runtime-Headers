
@interface TRDeviceSetupAction : NSObject {
    NSString * _actionType;
    NSDictionary * _parameters;
}

@property (nonatomic, readonly, copy) NSString *actionType;
@property (nonatomic, readonly, copy) NSDictionary *parameters;
@property (nonatomic, readonly) unsigned long long protocolVersion;

+ (id)actionWithActionType:(id)arg1 parameters:(id)arg2;
+ (id)actionWithData:(id)arg1 error:(id*)arg2 supportsLegacy:(bool)arg3;

- (void).cxx_destruct;
- (id)_initWithActionType:(id)arg1 parameters:(id)arg2;
- (id)actionType;
- (id)dataRepresentationWithError:(id*)arg1;
- (id)description;
- (id)init;
- (id)parameters;
- (id)propertyListRepresentation;
- (unsigned long long)protocolVersion;

@end
