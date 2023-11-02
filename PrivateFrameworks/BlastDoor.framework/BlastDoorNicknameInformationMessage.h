
@interface BlastDoorNicknameInformationMessage : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  nicknameInformationMessage;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) BlastDoorNicknameInformation *nicknameInformation;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)metadata;
- (id)nicknameInformation;

@end
