
@interface BlastDoorCollaborationClearNotice : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  collaborationClearNotice;
}

@property (nonatomic, readonly) NSString *collaborationId;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *guidString;
@property (nonatomic, readonly) long long version;

- (void).cxx_destruct;
- (id)collaborationId;
- (id)date;
- (id)description;
- (id)guidString;
- (id)init;
- (long long)version;

@end
