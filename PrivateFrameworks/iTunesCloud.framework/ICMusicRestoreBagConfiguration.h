
@interface ICMusicRestoreBagConfiguration : NSObject {
    NSArray * _allowedKinds;
    NSArray * _allowedMatchStatus;
    NSURL * _restoreURL;
    bool  _shouldGZip;
}

@property (nonatomic, readonly, copy) NSArray *allowedKinds;
@property (nonatomic, readonly, copy) NSArray *allowedMatchStatus;
@property (nonatomic, readonly, copy) NSURL *restoreURL;
@property (nonatomic, readonly) bool shouldGZip;

- (void).cxx_destruct;
- (id)allowedKinds;
- (id)allowedMatchStatus;
- (id)initWithServerConfiguration:(id)arg1;
- (id)restoreURL;
- (bool)shouldGZip;

@end
