
@interface AARegionInfo : NSObject <NSCopying> {
    NSDictionary * _regionInfoDictionary;
}

@property (nonatomic, readonly) NSString *displayedHostname;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayedHostname;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end
