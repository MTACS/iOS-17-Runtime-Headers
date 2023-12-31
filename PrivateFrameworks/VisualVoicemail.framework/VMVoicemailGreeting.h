
@interface VMVoicemailGreeting : NSObject <NSSecureCoding> {
    double  _duration;
    unsigned long long  _type;
    NSURL * _url;
}

@property (nonatomic) double duration;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (unsigned long long)type;
- (id)url;

@end
