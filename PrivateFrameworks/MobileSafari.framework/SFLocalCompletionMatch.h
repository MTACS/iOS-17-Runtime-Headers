
@interface SFLocalCompletionMatch : WBSURLCompletionMatch {
    long long  _matchLocation;
    NSString * _originalURLString;
    NSString * _title;
    NSString * _userVisibleURLString;
}

@property (nonatomic, readonly) long long matchLocation;
@property (nonatomic, readonly, copy) NSString *originalURLString;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *userVisibleURLString;

- (void).cxx_destruct;
- (id)initWithCompletionMatch:(id)arg1;
- (long long)matchLocation;
- (id)originalURLString;
- (id)title;
- (id)userVisibleURLString;

@end
