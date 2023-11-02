
@interface AASetupAssistantCreateResponse : AAResponse {
    NSString * _HSAAction;
    NSString * _HSAData;
}

@property (nonatomic, readonly) NSString *HSAAction;
@property (nonatomic, readonly) NSString *HSAData;
@property (nonatomic, readonly) NSString *appleID;
@property (nonatomic, readonly) NSString *personID;
@property (nonatomic, readonly) NSNumber *status;
@property (nonatomic, readonly) NSString *statusMessage;

- (void).cxx_destruct;
- (id)HSAAction;
- (id)HSAData;
- (id)appleID;
- (id)personID;
- (id)status;
- (id)statusMessage;

@end
