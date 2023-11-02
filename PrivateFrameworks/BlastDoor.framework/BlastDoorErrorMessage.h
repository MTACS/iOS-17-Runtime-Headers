
@interface BlastDoorErrorMessage : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  errorMessage;
}

@property (nonatomic, readonly) NSString *additionalInfo;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) unsigned short type;

- (void).cxx_destruct;
- (id)additionalInfo;
- (id)description;
- (id)init;
- (id)metadata;
- (unsigned short)type;

@end
