
@interface FCPuzzleOverrides : NSObject {
    NSString * _author;
    NSString * _puzzleDescription;
    NSString * _subtitle;
    NSString * _teaserAnswer;
    NSString * _teaserClue;
    NSString * _teaserDirection;
    NSString * _teaserInfo;
    NSString * _teaserNumber;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *author;
@property (nonatomic, readonly) NSString *puzzleDescription;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *teaserAnswer;
@property (nonatomic, readonly) NSString *teaserClue;
@property (nonatomic, readonly) NSString *teaserDirection;
@property (nonatomic, readonly) NSString *teaserInfo;
@property (nonatomic, readonly) NSString *teaserNumber;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)author;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 description:(id)arg3 author:(id)arg4 teaserClue:(id)arg5 teaserAnswer:(id)arg6 teaserInfo:(id)arg7 teaserDirection:(id)arg8 teaserNumber:(id)arg9;
- (id)puzzleDescription;
- (id)subtitle;
- (id)teaserAnswer;
- (id)teaserClue;
- (id)teaserDirection;
- (id)teaserInfo;
- (id)teaserNumber;
- (id)title;

@end
