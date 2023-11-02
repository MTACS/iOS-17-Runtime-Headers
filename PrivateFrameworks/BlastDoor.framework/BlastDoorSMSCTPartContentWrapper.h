
@interface BlastDoorSMSCTPartContentWrapper : NSObject {
    void sMSCTPart_Content;
}

@property (nonatomic, readonly) BlastDoorSMSCTPartAttachment *attachment;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorSMSCTPartPlain *plain;
@property (nonatomic, readonly) BlastDoorSMSCTPartSMIL *smil;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)attachment;
- (id)description;
- (id)init;
- (id)plain;
- (id)smil;
- (unsigned long long)type;

@end
