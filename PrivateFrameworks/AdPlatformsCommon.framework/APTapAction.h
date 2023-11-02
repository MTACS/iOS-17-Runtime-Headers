
@interface APTapAction : NSObject <NSSecureCoding> {
    long long  _actionType;
    NSURL * _actionURL;
    NSNumber * _adamIdentifier;
    double  _confirmedClickInterval;
    NSDictionary * _iTunesMetadata;
    long long  _templateType;
}

@property long long actionType;
@property (retain) NSURL *actionURL;
@property (retain) NSNumber *adamIdentifier;
@property double confirmedClickInterval;
@property (retain) NSDictionary *iTunesMetadata;
@property long long templateType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)actionType;
- (id)actionURL;
- (id)adamIdentifier;
- (double)confirmedClickInterval;
- (void)encodeWithCoder:(id)arg1;
- (id)iTunesMetadata;
- (id)initWithCoder:(id)arg1;
- (void)setActionType:(long long)arg1;
- (void)setActionURL:(id)arg1;
- (void)setAdamIdentifier:(id)arg1;
- (void)setConfirmedClickInterval:(double)arg1;
- (void)setITunesMetadata:(id)arg1;
- (void)setTemplateType:(long long)arg1;
- (long long)templateType;

@end
