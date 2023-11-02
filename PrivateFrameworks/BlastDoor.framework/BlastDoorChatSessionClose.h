
@interface BlastDoorChatSessionClose : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  chatSessionClose;
}

@property (nonatomic, readonly) NSString *conversationID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *handle;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long version;

- (void).cxx_destruct;
- (id)conversationID;
- (id)description;
- (id)handle;
- (id)init;
- (id)metadata;
- (id)name;
- (long long)version;

@end
