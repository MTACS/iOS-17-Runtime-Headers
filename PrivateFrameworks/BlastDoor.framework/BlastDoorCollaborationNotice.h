
@interface BlastDoorCollaborationNotice : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  collaborationNotice;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *guidString;
@property (nonatomic, readonly) NSData *highlightEvent;
@property (nonatomic, readonly) unsigned long long highlightEventType;
@property (nonatomic, readonly) NSDate *noticeDate;
@property (nonatomic, readonly) long long version;

- (void).cxx_destruct;
- (id)description;
- (id)guidString;
- (id)highlightEvent;
- (unsigned long long)highlightEventType;
- (id)init;
- (id)noticeDate;
- (long long)version;

@end
