
@interface BlastDoorSMSParserPart : NSObject {
    void sMSParserPart;
}

@property (nonatomic, readonly) NSArray *attachmentParts;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *textParts;

- (void).cxx_destruct;
- (id)attachmentParts;
- (id)description;
- (id)init;
- (id)textParts;

@end
