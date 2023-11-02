
@interface FCSportsFavoritesSyncModalConfig : NSObject {
    NSString * _bodyText;
    NSString * _titleText;
}

@property (nonatomic, readonly) NSString *bodyText;
@property (nonatomic, readonly) NSString *titleText;

- (void).cxx_destruct;
- (id)bodyText;
- (id)initWithConfigDictionary:(id)arg1;
- (id)titleText;

@end
