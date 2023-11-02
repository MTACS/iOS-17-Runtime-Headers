
@interface BlastDoorEncodedAttachments : NSObject {
    void encodedAttachments;
}

@property (nonatomic, readonly) NSArray *contents;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)contents;
- (id)description;
- (id)init;

@end
