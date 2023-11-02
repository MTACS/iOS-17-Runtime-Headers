
@interface PDCommentAuthor : NSObject {
    unsigned int  mColorIndex;
    unsigned int  mId;
    NSString * mInitials;
    unsigned int  mLastCommentIndex;
    NSString * mName;
}

- (void).cxx_destruct;
- (unsigned int)colorIndex;
- (id)description;
- (unsigned int)id;
- (id)init;
- (id)initials;
- (unsigned int)lastCommentIndex;
- (id)name;
- (void)setColorIndex:(unsigned int)arg1;
- (void)setId:(unsigned int)arg1;
- (void)setInitials:(id)arg1;
- (void)setLastCommentIndex:(unsigned int)arg1;
- (void)setName:(id)arg1;

@end
