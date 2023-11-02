
@interface BlastDoorContactMessage : NSObject {
    void contactMessage;
}

@property (nonatomic, readonly) BlastDoorContactMessage_ContactInfo *contactInfo;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)contactInfo;
- (id)description;
- (id)init;

@end
