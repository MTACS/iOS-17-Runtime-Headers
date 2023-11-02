
@interface VUIPlaybackTabDetails : NSObject {
    NSString * _tabId;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *tabId;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)tabId;
- (id)title;

@end
