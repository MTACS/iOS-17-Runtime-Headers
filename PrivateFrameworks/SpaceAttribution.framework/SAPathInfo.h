
@interface SAPathInfo : NSObject <NSSecureCoding> {
    bool  _exclusive;
    NSURL * _url;
}

@property bool exclusive;
@property (retain) NSURL *url;

+ (id)pathInfoWithURL:(id)arg1;
+ (id)pathInfoWithURL:(id)arg1 exclusive:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)exclusive;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 exclusive:(bool)arg2;
- (void)setExclusive:(bool)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
