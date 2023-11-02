
@interface BlastDoorRetractMessageReceipt : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  retractMessageReceipt;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)metadata;

@end
