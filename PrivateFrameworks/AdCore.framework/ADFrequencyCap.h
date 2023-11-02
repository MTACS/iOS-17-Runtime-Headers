
@interface ADFrequencyCap : NSObject {
    NSString * _adMetadata;
    long long  _downloadType;
    NSString * _identifier;
    double  _setTime;
}

@property (nonatomic, retain) NSString *adMetadata;
@property (nonatomic) long long downloadType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) double setTime;

- (void).cxx_destruct;
- (id)adMetadata;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)downloadType;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)setAdMetadata:(id)arg1;
- (void)setDownloadType:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSetTime:(double)arg1;
- (double)setTime;
- (id)splitCapData:(id)arg1;

@end
