
@interface TSKChangeRecord : NSObject {
    id  mDetails;
    int  mKind;
}

@property (nonatomic, readonly) bool allowedInCommit;
@property (nonatomic, readonly) id details;
@property (nonatomic, readonly) int kind;

+ (id)changeRecordWithKind:(int)arg1 details:(id)arg2;

- (bool)allowedInCommit;
- (void)dealloc;
- (id)details;
- (id)initWithKind:(int)arg1 details:(id)arg2;
- (int)kind;

@end
