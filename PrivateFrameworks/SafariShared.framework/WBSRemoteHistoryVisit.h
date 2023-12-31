
@interface WBSRemoteHistoryVisit : NSObject <NSSecureCoding> {
    NSDate * _date;
    NSURL * _url;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 date:(id)arg2;
- (id)url;

@end
