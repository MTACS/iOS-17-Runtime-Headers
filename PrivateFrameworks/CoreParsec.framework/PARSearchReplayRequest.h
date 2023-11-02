
@interface PARSearchReplayRequest : PARSearchRequest <NSSecureCoding> {
    NSDictionary * _replayHeaderItems;
    NSString * _replaySearchURL;
}

@property (nonatomic, copy) NSDictionary *replayHeaderItems;
@property (nonatomic, copy) NSString *replaySearchURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)replayHeaderItems;
- (id)replaySearchURL;
- (void)setReplayHeaderItems:(id)arg1;
- (void)setReplaySearchURL:(id)arg1;

@end
