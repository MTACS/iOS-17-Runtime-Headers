
@interface _PXMusicCurationResult : NSObject <PXMusicCurationResult> {
    NSError * _error;
    bool  _isComplete;
    NSDictionary * _songsByCategory;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool isComplete;
@property (nonatomic, copy) NSDictionary *songsByCategory;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (id)init;
- (bool)isComplete;
- (void)setError:(id)arg1;
- (void)setIsComplete:(bool)arg1;
- (void)setSongsByCategory:(id)arg1;
- (id)songsByCategory;

@end
