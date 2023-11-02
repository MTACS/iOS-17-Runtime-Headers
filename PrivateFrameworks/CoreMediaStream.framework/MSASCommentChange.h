
@interface MSASCommentChange : NSObject {
    MSASComment * _comment;
    int  _deletionIndex;
    int  _type;
}

@property (nonatomic, retain) MSASComment *comment;
@property (nonatomic) int deletionIndex;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)comment;
- (int)deletionIndex;
- (id)description;
- (void)setComment:(id)arg1;
- (void)setDeletionIndex:(int)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
