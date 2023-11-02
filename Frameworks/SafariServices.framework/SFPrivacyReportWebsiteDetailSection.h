
@interface SFPrivacyReportWebsiteDetailSection : NSObject {
    NSString * _title;
    NSArray * _trackers;
}

@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSArray *trackers;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 trackers:(id)arg2;
- (id)title;
- (id)trackers;

@end
