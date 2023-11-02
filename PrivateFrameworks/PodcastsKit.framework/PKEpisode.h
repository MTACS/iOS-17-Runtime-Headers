
@interface PKEpisode : NSObject <NSSecureCoding> {
    void duration;
    void episodeUuid;
    void guid;
    void isExplicit;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  releaseDate;
    void show;
    void storeId;
    void streamUrl;
    void title;
    void uuid;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, copy) NSString *episodeUuid;
@property (nonatomic, copy) NSString *guid;
@property (nonatomic, readonly) bool isExplicit;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) PKShow *show;
@property (nonatomic, readonly) PKEpisodeStoreId *storeId;
@property (nonatomic, readonly) NSString *streamUrl;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, copy) NSString *uuid;

+ (id)contentFrom:(id)arg1;
+ (void)fetchEpisodeFrom:(id)arg1 completion:(id /* block */)arg2;
+ (id)itemFrom:(id)arg1;
+ (long long)mediaTaskType;
+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)episodeUuid;
- (id)guid;
- (id)init;
- (id)initFrom:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 releaseDate:(id)arg2 isExplicit:(bool)arg3 duration:(double)arg4 storeId:(id)arg5 show:(id)arg6 guid:(id)arg7 uuid:(id)arg8 streamUrl:(id)arg9;
- (bool)isExplicit;
- (id)lookupEpisode;
- (id)releaseDate;
- (void)setEpisodeUuid:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)show;
- (id)storeId;
- (id)streamUrl;
- (id)title;
- (void)updateForDatabaseMatch;
- (id)uuid;

@end
