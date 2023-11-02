
@interface BlastDoorCollaborationNoticeAction : NSObject {
    void collaborationNoticeAction;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSArray *guidStrings;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)description;
- (id)guidStrings;
- (id)init;
- (long long)type;

@end
