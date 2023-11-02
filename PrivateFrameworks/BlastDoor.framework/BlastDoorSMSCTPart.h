
@interface BlastDoorSMSCTPart : NSObject {
    void sMSCTPart;
}

@property (nonatomic, readonly) BlastDoorSMSCTPartContentWrapper *content;
@property (nonatomic, readonly) NSString *contentId;
@property (nonatomic, readonly) NSString *contentLocation;
@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)content;
- (id)contentId;
- (id)contentLocation;
- (id)contentType;
- (id)description;
- (id)init;

@end
