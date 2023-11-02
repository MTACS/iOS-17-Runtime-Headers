
@interface ObjCRenameSequence : NSObject {
    void renameAddedBySequence;
    void renameSequence;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool isEmpty;

- (void).cxx_destruct;
- (void)addAddedByReplica:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addAddedByVersion:(id)arg1;
- (void)addWithReplica:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)description;
- (id)init;
- (bool)isEmpty;

@end
