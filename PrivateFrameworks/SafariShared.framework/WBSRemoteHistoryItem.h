
@interface WBSRemoteHistoryItem : NSObject <NSSecureCoding> {
    NSDate * _lastVisitTime;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly) NSDate *lastVisitTime;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 title:(id)arg2 lastVisitTime:(id)arg3;
- (id)lastVisitTime;
- (id)title;
- (id)url;

@end
