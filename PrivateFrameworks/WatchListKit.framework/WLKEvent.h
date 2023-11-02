
@interface WLKEvent : NSObject <NSSecureCoding> {
    NSString * _canonicalID;
    unsigned long long  _contentType;
    NSDictionary * _dictionary;
    NSDate * _endDate;
    NSString * _nowPlayingPassThrough;
    NSDate * _startDate;
    NSString * _url;
}

@property (nonatomic, readonly) NSString *canonicalID;
@property (nonatomic, readonly) unsigned long long contentType;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSString *nowPlayingPassThrough;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSString *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)canonicalID;
- (unsigned long long)contentType;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)nowPlayingPassThrough;
- (id)startDate;
- (id)url;

@end
