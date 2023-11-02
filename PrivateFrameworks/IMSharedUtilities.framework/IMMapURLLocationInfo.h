
@interface IMMapURLLocationInfo : NSObject {
    NSString * _address;
    CLLocation * _location;
    NSString * _query;
    NSURL * _url;
}

@property (nonatomic, copy) NSString *address;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, retain) NSURL *url;

+ (id)locationInfoFromURL:(id)arg1;

- (void).cxx_destruct;
- (id)address;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)query;
- (void)setAddress:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
