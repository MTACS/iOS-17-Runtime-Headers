
@interface BlastDoorSyndicationAction : NSObject {
    void syndicationAction;
}

@property (nonatomic, readonly) unsigned char actionType;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) unsigned long long encodedSyndicationStartDate;
@property (nonatomic, readonly) BlastDoorGroupContext *groupContext;
@property (nonatomic, readonly) unsigned char itemType;
@property (nonatomic, readonly) NSString *messagePartGUID;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } syndicatedMessagePartRange;
@property (nonatomic, readonly) unsigned char version;

- (void).cxx_destruct;
- (unsigned char)actionType;
- (id)description;
- (unsigned long long)encodedSyndicationStartDate;
- (id)groupContext;
- (id)init;
- (unsigned char)itemType;
- (id)messagePartGUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })syndicatedMessagePartRange;
- (unsigned char)version;

@end
