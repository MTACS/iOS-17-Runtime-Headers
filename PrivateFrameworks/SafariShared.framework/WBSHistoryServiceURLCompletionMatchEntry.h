
@interface WBSHistoryServiceURLCompletionMatchEntry : NSObject <NSSecureCoding> {
    struct unique_ptr<SafariShared::_HistoryStreamedMatchEntry, std::default_delete<SafariShared::_HistoryStreamedMatchEntry>> { 
        struct __compressed_pair<SafariShared::_HistoryStreamedMatchEntry *, std::default_delete<SafariShared::_HistoryStreamedMatchEntry>> { 
            struct _HistoryStreamedMatchEntry {} *__value_; 
        } __ptr_; 
    }  _streamData;
    NSString * _title;
    NSString * _url;
}

@property (nonatomic, readonly) struct _HistoryStreamedMatchEntry { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; char *x2; char *x3; float x4; long long x5; }*streamData;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) float topSitesScore;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) long long visitCountScore;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStreamData:(void*)arg1;
- (id)initWithURLString:(id)arg1 title:(id)arg2 topSitesScore:(float)arg3 visitCountScore:(long long)arg4;
- (struct _HistoryStreamedMatchEntry { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; } x1; char *x2; char *x3; float x4; long long x5; }*)streamData;
- (id)title;
- (float)topSitesScore;
- (id)url;
- (long long)visitCountScore;

@end
